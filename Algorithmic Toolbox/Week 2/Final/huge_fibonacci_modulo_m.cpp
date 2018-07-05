// "Copyright [2018] <Sasha Prokhorenko"
#include <iostream>
#include <vector>

using namespace std;

long long pisano_period(long long m) {
    long long a = 0;
    long long  b = 1;
    long long c = a + b;

    for (int i = 0; i < m * m; i++) {
        c = (a + b) % m;
        a = b;
        b = c;
        if (a == 0 && b == 1) return i + 1;
    }
}

long long fibonacci_huge_modulo(long long n, long long m) {
    long long remainder = n % pisano_period(m);

    long long first = 0;
    long long second = 1;
    long long res = remainder;

    for (long long i = 1; i < remainder; i++) {
        res = (first + second) % m;
        first = second;
        second = res;
    }

    return res % m;
}

int main() {
    long long n, m;
    cin >> n >> m;
    cout << fibonacci_huge_modulo(n, m) << '\n';
    return 0;
}