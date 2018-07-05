// "Copyright [2018] <Sasha Prokhorenko"
#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

long long fibonacci_fast(long long n) {
    if (n <= 1) {
        return n;
    } else {
        vector<long long> numbers(n+1);
        numbers[0] = 0;
        numbers[1] = 1;

        for (int i = 2; i <= n; ++i) {
            numbers[i] = numbers[i - 1] + numbers[i - 2];
        }
        return numbers[n];
    }
}

int main() {
    long long n;
    cin >> n;

    cout << fibonacci_fast(n) << '\n';
    return 0;
}
