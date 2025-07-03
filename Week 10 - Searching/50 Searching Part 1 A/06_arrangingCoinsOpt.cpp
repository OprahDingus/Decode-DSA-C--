#include <iostream>
#include <cmath>
using namespace std;

int arrangeCoins(int n) {
    long long t = (long long)(2 * (long long)(n));
    long long d = 4 * t + 1;
    int k = (sqrt(d) - 1) / 2;
    return k;
}
// LEETCODE 441 (EASY)
int main(void) {
    int n;
    cout << "Enter number of coins: ";
    cin >> n;
    cout << "Complete rows: " << arrangeCoins(n);
    return 0;
}