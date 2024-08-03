import requests
from bs4 import BeautifulSoup

def fetch_testcases_from_problem(problem_url):
    # Send request to the problem page
    response = requests.get(problem_url)
    
    if response.status_code == 200:
        soup = BeautifulSoup(response.content, 'html.parser')
        
        # Extract the problem statement
        problem_statement = soup.find('div', class_='problem-statement')
        
        if problem_statement:
            # Extract input/output examples
            examples = problem_statement.find_all('pre')
            
            # Open file for writing
            with open('testcases.txt', 'w') as file:
                for example in examples:
                    # Extract text
                    example_text = example.get_text()
                    
                    # Strip leading/trailing whitespaces and handle multi-line examples
                    example_text = example_text.strip()
                    
                    # Write each line to the file
                    lines = example_text.splitlines()
                    for line in lines:
                        if line.strip():  # Write non-empty lines
                            file.write(line + '\n')
                    file.write('\n')  # Separate different examples by a blank line
                    
            print("Test cases have been saved to 'testcases.txt'.")
        else:
            print("Error: Could not find problem statement.")
    else:
        print("Error: API request failed.")

# Problem URL for Codeforces contest 1884 problem B
fetch_testcases_from_problem('https://codeforces.com/contest/1884/problem/B')

