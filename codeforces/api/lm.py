import requests
from datetime import datetime, timedelta
from collections import defaultdict

def fetch_last_week_problems_solved(handle):
    rating_distribution_last_week = defaultdict(int)

    url = f"https://codeforces.com/api/user.status?handle={handle}&from=1&count=10000"
    try:
        response = requests.get(url)
        response.raise_for_status()  # Raise an exception for bad status codes
        data = response.json()
        if data['status'] != 'OK':
            print(f"Failed to fetch data for {handle}: {data.get('comment', 'Unknown error')}")
            return

        submissions = data['result']
        problems_solved_last_week = set()
        rating_solved_last_week = defaultdict(int)
        one_week_ago = datetime.now() - timedelta(days=7)

        for submission in submissions:
            if 'verdict' in submission and submission['verdict'] == 'OK' and 'problem' in submission:
                problem = submission['problem']
                problem_id = f"{problem['contestId']}{problem['index']}"

                submission_time = datetime.fromtimestamp(submission['creationTimeSeconds'])
                if submission_time > one_week_ago and problem_id not in problems_solved_last_week:
                    problems_solved_last_week.add(problem_id)
                    if 'rating' in problem:
                        rating_solved_last_week[problem['rating']] += 1

        for rating, count in rating_solved_last_week.items():
            rating_distribution_last_week[rating] += count

        sorted_rating_distribution_last_week = dict(sorted(rating_distribution_last_week.items()))

        print(f"Problems solved in the last week by {handle}: {len(problems_solved_last_week)}")
        print(f"Rating distribution in the last week for {handle}: {sorted_rating_distribution_last_week}")
    except requests.exceptions.RequestException as e:
        print(f"Failed to fetch data for {handle}: {e}")
    except KeyError as e:
        print(f"Failed to parse data for {handle}: {e}")

# Replace 'coder_salman' with your actual Codeforces handle
handle = 'coder_salman'
fetch_last_week_problems_solved(handle)

