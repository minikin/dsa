#include <iostream>
#include <vector>
#include <cstdlib>

using std::vector;
using std::cin;
using std::cout;

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

long long MaxPairwiseProductFast(const vector<int>& numbers) {
    int n = numbers.size();

    int max_index1 = -1;
    for (int i = 0; i < n; ++i) {
        if ((max_index1 == -1) || (numbers[i] > numbers[max_index1])) {
           max_index1 = i;
        }
    }

    int max_index2 = -1;
    for (int j = 0; j < n; ++j) {
        if ((j != max_index1) &&
        ((max_index2 == -1) || (numbers[j] > numbers[max_index2]))) {
           max_index2 = j;
        }
    }
    return ((long long)(numbers[max_index1])) * numbers[max_index2];
}


int main() {
    while (true) {
        int n = rand() % 10 + 2;
        cout << n << "\n";
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            a.push_back(rand() % 1000000);
        }

        for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << "\n";

        long long result1 = MaxPairwiseProduct(a);
        long long result2 = MaxPairwiseProductFast(a);

        if (result1 != result2) {
            cout << "WRONG ANSWER: " << result1 << " " << result2 << "\n";
            break;
        } else {
            cout << "OK\n";
        }
    }
}