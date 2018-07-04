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

// Complexity: O(n), space O(1).
int64_t fibonacci_fast(int64_t n) {
    vector<int> numbers(n);

    numbers[0] = 0;
    numbers[1] = 1;

    for (int i = 2; i <= n; ++i) {
        numbers[i] =  numbers[i - 1] + numbers[i - 2];
    }

   return numbers[n];
}

void test_solution() {
    assert(fibonacci_fast(3) == 2);
    assert(fibonacci_fast(10) == 55);
    for (int64_t n = 0; n < 50; ++n) {
        assert(fibonacci_fast(n) == fibonacci_naive(n));
    }    
}

int main() {
    test_solution();
    return 0;
}