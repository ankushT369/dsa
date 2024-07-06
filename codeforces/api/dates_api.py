import requests
from datetime import datetime

def get_upcoming_contests():
    url = 'https://codeforces.com/api/contest.list'
    response = requests.get(url)
    data = response.json()

    if data['status'] == 'OK':
        contests = data['result']
        upcoming_contests = [contest for contest in contests if contest['phase'] == 'BEFORE']
        return upcoming_contests
    else:
        print("Error fetching contest data.")
        return []

def create_custom_calendar_file(contests, filename='/home/ankush/dsa/codeforces/api/events.cal'): # Specify full path
    with open(filename, 'w') as file:
        for contest in contests:
            start_time = datetime.fromtimestamp(contest['startTimeSeconds'])
            file.write(f"{start_time.strftime('%Y-%m-%d %H:%M:%S')} {contest['name']}\n")

if __name__ == "__main__":
    contests = get_upcoming_contests()
    create_custom_calendar_file(contests)

