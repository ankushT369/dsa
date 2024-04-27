#include <bits/stdc++.h>
using namespace std;


//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55
vector<long long> cache(100, 0);
long long fib(int num) {
    if(num <= 1) return 1;

    if(cache[num] != 0) {
        return cache[num];
    }

    return cache[num] = fib(num - 1) + fib(num - 2);
}
/*
long long fib(int num) {
    if(num <= 1) return 1;

    return fib(num - 1) + fib(num - 2);
}
*/
int main() {
    using namespace std::chrono;

    auto st = high_resolution_clock::now();

    cout << fib(100) << '\n';

    auto et = high_resolution_clock::now();

    duration<double> time_span = duration_cast
    <duration<double>>(et - st);

    std::cout << "Elapsed time: " << time_span.count() << " seconds." << std::endl;

    return 0;
}
