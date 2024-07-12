#include <bits/stdc++.h>
using namespace std;

// O(2^n)
/*
int f(int n) {
    return (n <= 0) ? 0 : (n == 1) ? 1 : f(n - 1) + f(n - 2);
}
*/

// O(n)

/*
unordered_map<int, int> memo;

int f(int n) {
    if(memo.count(n)) return memo[n];

    if(n == 0) return 0;
    if(n == 1) return 1;
    
    return memo[n] = f(n - 1) + f(n - 2);
}



int main() {
    int n = 8;
    cout << f(n) << '\n';
    return 0;
}
*/


/*
int f1(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return f1(n - 1) + f1(n - 2);
}
int f2(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return f2(n - 2) + f2(n - 1);
}

int main(int argc, char* argv[]) {

    int n = atoi(argv[1]);
    int flag = atoi(argv[2]);
    int result;
        auto start = chrono::high_resolution_clock::now();
        auto end = chrono::high_resolution_clock::now();

    if(flag == 1) {
        start = chrono::high_resolution_clock::now();
        result = f1(n);
        end = chrono::high_resolution_clock::now();
    }
    else {
        start = chrono::high_resolution_clock::now();
        result = f2(n);
        end = chrono::high_resolution_clock::now();
    }

    chrono::duration<double> elapsed = end - start;

    cout << "Fibonacci of " << n << " is: " << result << '\n';
    cout << "Time taken: " << elapsed.count() << " seconds\n";

    return 0;
}
*/


const int MAX = 3;
int fib[MAX] = {0};

int f(int n) {
    fib[0] = 0;
    fib[1] = 1;

    for(auto i = 2; i <= n; i++) {
        fib[i % MAX] = fib[(i - 1) % MAX] + fib[(i - 2) % MAX];
    }
    
    return fib[n % MAX];
}



int main() {
    cout << f(4) << '\n';
    return 0;
}














