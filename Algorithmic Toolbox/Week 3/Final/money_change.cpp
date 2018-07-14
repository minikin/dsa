// "Copyright [2018] <Sasha Prokhorenko"
#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

long long change_money(long long m) {
    return (m/10 + (m % 10)/5 + m % 5);
}

int main() {
    long long m;
    cin >> m;
    cout << change_money(m) << '\n';
    return 0;
}