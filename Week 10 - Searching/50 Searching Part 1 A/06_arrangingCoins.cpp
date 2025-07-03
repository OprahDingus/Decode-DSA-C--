#include <iostream>
using namespace std;

int arrangeCoins(int n) {
    long long low = 1;
    long long high = n;
    while(low <= high) {
        long long k = low + (high - low) / 2;
        long long m = k * (k + 1) / 2;
        if(m == n) {
            return (int) k;
        }
        if(m > n) {
            high = k - 1;
        }
        else {
            low = k + 1;
        }
    }
    return (int) high;
}
// LEETCODE 441 (EASY)
int main(void) {
    int n;
    cout << "Enter number of coins: ";
    cin >> n;
    cout << "Complete rows: " << arrangeCoins(n);
    return 0;
}