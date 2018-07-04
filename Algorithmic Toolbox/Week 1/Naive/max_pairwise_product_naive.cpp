#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

long long  MaxPairwiseProduct(const vector<int>& numbers) {
    long long max_product = 0;
    int n = numbers.size();

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if((long long)numbers[i] * numbers[j] > max_product) {
                max_product = numbers[i] * numbers[j];
            }
        }

    }

    return max_product;
}

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    long long result = MaxPairwiseProduct(numbers);
    cout << result << "\n";
    return 0;
}