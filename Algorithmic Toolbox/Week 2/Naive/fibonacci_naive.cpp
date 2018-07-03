// "Copyright [2018] <Sasha Prokhorenko"
#include <iostream>
#include <vector>
#include <cstdlib>

using std::vector;
using std::cin;
using std::cout;

long long  fibonacci_naive(long long n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci_naive(n - 1) + fibonacci_naive(n - 2);
    }
}

long long  fibonacci_fast(long long n) {
    if (n <= 1) {
        return n;
    } else {
        
    }
}

void test_solution() {
    assert(fibonacci_fast(3) == 2);
    assert(fibonacci_fast(10) == 55);
    for (int n = 0; n < 20; ++n) {
        assert(fibonacci_fast(n) == fibonacci_naive(n));
    }    
}

int main() {
    long long n;
    cin >> n;

    long long result_naive = fibonacci_naive(n);
    cout << result_naive << "\n";

    //test_solution();
    //cout << fibonacci_fast(n) << '\n';
    return 0;
}