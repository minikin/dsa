// "Copyright [2018] <Sasha Prokhorenko"
#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

long long pisano_period(long long modulo) {
    long long previous = 0;
    long long current = 1;
    long long result = 1;

    while ((previous) != 0 && (current != 1)) {
        long long buffer = (previous + current) % modulo;
        previous = current;
        current = buffer;
        result += 1;
    }

    return result;
}

long long get_fibonacci_huge(long long n, long long m) {
    long long remainder = n % pisano_period(m);

    long long first = 0;
    long long second = 1;

    long long res = remainder;

    for (int i = 1; i < remainder; i++) {
        res = (first + second) % m;
        first = second;
        second = res;
    }

    return res % m;
}


// long long get_fibonacci_huge(long long n, long long m) {
//     if (n == 1) {
//         return 1;
//     } else {
//         if ((m == 0) || (m == n)) {
//             return 0;
//         } else {
//             std::vector<long long> numbers(n+1);
//             numbers[0] = 0;
//             numbers[1] = 1;

//             for (long long i = 2; i <= n; ++i) {
//                 numbers[i] = (numbers[i - 1] + numbers[i - 2]) % m;
//             }
//             return numbers[n];
//         }
//     }
// }

int main() {
    long long n, m;
    cin >> n >> m;
    cout << get_fibonacci_huge(n, m) << '\n';
    return 0;
}