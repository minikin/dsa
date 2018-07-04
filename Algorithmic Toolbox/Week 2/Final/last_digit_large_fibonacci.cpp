// "Copyright [2018] <Sasha Prokhorenko"
#include <iostream>
#include <vector>
#include <cstdlib>

long long fibonacci_fast(long long n) {
    if (n == 0) {
        return 0;
    } else {
        std::vector<long long> numbers(n+1);
        numbers[0] = 0;
        numbers[1] = 1;

        for (int i = 2; i <= n; ++i) {
            numbers[i] = (numbers[i - 1] + numbers[i - 2]) % 10;
        }
        return numbers[n];
    }
}

int main() {
    long long n;
    std::cin >> n;

    std::cout << fibonacci_fast(n) << '\n';
    return 0;
}
