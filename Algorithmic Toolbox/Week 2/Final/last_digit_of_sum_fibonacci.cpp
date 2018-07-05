// "Copyright [2018] <Sasha Prokhorenko"
#include <iostream>
#include <vector>

using namespace std;

long long last_digit_sum_fibonacci(long long n) {
    if (n<= 1) {
        return n;
    } else {
        long long pisano = 60; // Then pisano period of module 10
        n = (n + 2) % pisano; // 

        vector<long long> fibonacci(n+1);
        fibonacci = {1, 1};

        for(long long i = 2; i<=n; i++){
            fibonacci[i] = (fibonacci[i-1] + fibonacci[i-2]) % 10;
        }

        long long result = (fibonacci[n - 1] - 1) % 10;

        if (result < 0) {
            return 9;
        } else {
            return result;
        }
    }
}

int main() {
    long long n;
    cin >> n;

    cout << last_digit_sum_fibonacci(n) << '\n';
    return 0;
}