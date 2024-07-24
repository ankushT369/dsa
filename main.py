import requests
from bs4 import BeautifulSoup

def login_to_codeforces(session, handle, password):
    login_url = 'https://codeforces.com/enter'
    response = session.get(login_url)
    soup = BeautifulSoup(response.text, 'html.parser')

    csrf_token = soup.find('input', {'name': 'csrf_token'})['value']

    login_data = {
        'csrf_token': csrf_token,
        'action': 'enter',
        'handleOrEmail': handle,
        'password': password,
        '_tta': '176'
    }

    response = session.post(login_url, data=login_data)
    return 'Logout' in response.text

def submit_solution(session, contest_id, problem_index, solution_code, programming_language_id):
    submit_url = f'https://codeforces.com/contest/{contest_id}/submit'
    response = session.get(submit_url)
    soup = BeautifulSoup(response.text, 'html.parser')

    csrf_token = soup.find('input', {'name': 'csrf_token'})['value']

    submit_data = {
        'csrf_token': csrf_token,
        'action': 'submitSolutionFormSubmitted',
        'submittedProblemIndex': problem_index,
        'programTypeId': programming_language_id,
        'source': solution_code,
        '_tta': '176',
        'tabSize': '4'
    }

    response = session.post(submit_url, data=submit_data)
    return 'My Submissions' in response.text

def main():
    handle = 'coder_salman'
    password = 'idontno1y2t'
    contest_id = '1988'
    problem_index = 'A'
    programming_language_id = '42'  # 42 for GNU G++17 7.3.0 in Codeforces
    solution_code = '''
#include <bits/stdc++.h>
using namespace std;

template<typename T>
void print(vector<T> vec) {
    for(auto val : vec) cout << val << " ";
    cout << '\n';
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

#define py cout << "yes\n";
#define pn cout << "no\n";


#define int long long
#define uint unsigned long long 

#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define maxe(V) max_element(V.begin(), V.end())
#define mine(V) min_element(V.begin(), V.end())
#define SORT(V) std::sort(V.begin(), V.end())
#define SORT_R(V) sort(V.begin(), V.end(), greater<>())
#define FIND(V, num_find) find(V.begin(), V.end(), num_find)

typedef vector<int> vi;

void f() {
    int n, k; cin >> n >> k;
    if(n == 1) {
        cout << 0 << '\n';
        return ;
    }
    if(k >= n) {
        cout << 1 << '\n';
        return ;
    }
    else {
        int cnt = 0;
        while(n > 1) {
            cnt++;
            n = n - (k - 1);
        }

        cout << cnt << '\n';
    }

}



signed main() {
    fio;

    int tt; cin >> tt;
    while(tt--) {
        f();
    }

    return 0;
}

 '''

    with requests.Session() as session:
        if login_to_codeforces(session, handle, password):
            print('Logged in successfully!')
            if submit_solution(session, contest_id, problem_index, solution_code, programming_language_id):
                print('Solution submitted successfully!')
            else:
                print('Failed to submit the solution.')
        else:
            print('Login failed.')

if __name__ == '__main__':
    main()

