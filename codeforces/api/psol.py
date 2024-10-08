import requests
from datetime import datetime, timedelta
from collections import defaultdict

def fetch_total_problems_solved(handles):
    total_problems_solved = 0
    total_problems_solved_last_month = 0
    rating_distribution = defaultdict(int)
    rating_distribution_last_month = defaultdict(int)

    for handle in handles:
        url = f"https://codeforces.com/api/user.status?handle={handle}&from=1&count=10000"
        try:
            response = requests.get(url)
            response.raise_for_status()  # Raise an exception for bad status codes
            data = response.json()
            if data['status'] != 'OK':
                print(f"Failed to fetch data for {handle}: {data.get('comment', 'Unknown error')}")
                continue

            submissions = data['result']
            problems_solved = set()
            problems_solved_last_month = set()
            rating_solved = defaultdict(int)
            rating_solved_last_month = defaultdict(int)
            one_month_ago = datetime.now() - timedelta(days=30)

            for submission in submissions:
                if 'verdict' in submission and submission['verdict'] == 'OK' and 'problem' in submission:
                    problem = submission['problem']
                    problem_id = f"{problem['contestId']}{problem['index']}"
                    if problem_id not in problems_solved:  # Only count each problem once per user
                        problems_solved.add(problem_id)
                        if 'rating' in problem:
                            rating_solved[problem['rating']] += 1

                    submission_time = datetime.fromtimestamp(submission['creationTimeSeconds'])
                    if submission_time > one_month_ago and problem_id not in problems_solved_last_month:
                        problems_solved_last_month.add(problem_id)
                        if 'rating' in problem:
                            rating_solved_last_month[problem['rating']] += 1

            total_problems_solved += len(problems_solved)
            total_problems_solved_last_month += len(problems_solved_last_month)
            for rating, count in rating_solved.items():
                rating_distribution[rating] += count
            for rating, count in rating_solved_last_month.items():
                rating_distribution_last_month[rating] += count

            print(f"\nTotal problems solved by {handle}: {len(problems_solved)}")
            print(f"Problems solved in the last month by {handle}: {len(problems_solved_last_month)}")
            print(f"Rating distribution for {handle}: {dict(rating_solved)}")
            print(f"Rating distribution in the last month for {handle}: {dict(rating_solved_last_month)}")
        except requests.exceptions.RequestException as e:
            print(f"Failed to fetch data for {handle}: {e}")
        except KeyError as e:
            print(f"Failed to parse data for {handle}: {e}")

    print(f"\nTotal problems solved across all profiles: {total_problems_solved}")
    print(f"Total problems solved across all profiles in the last month: {total_problems_solved_last_month}")
    print(f"Overall rating distribution: {dict(rating_distribution)}")
    print(f"Overall rating distribution in the last month: {dict(rating_distribution_last_month)}")

# Replace 'ankushmondal1y2t', 'tristan_tate123', 'coder_salman' with your actual Codeforces handles
handles = ['ankushmondal1y2t']
fetch_total_problems_solved(handles)

