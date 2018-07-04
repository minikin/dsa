// "Copyright [2018] <Sasha Prokhorenko"
#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

// Complexity is O(2^n).
int64_t  fibonacci_naive(int64_t n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci_naive(n - 1) + fibonacci_naive(n - 2);
    }
}

int main() {
    int64_t n;
    cin >> n;

    int64_t result_naive = fibonacci_naive(n);
    cout << "result: " << result_naive << "\n";

    return 0;
}