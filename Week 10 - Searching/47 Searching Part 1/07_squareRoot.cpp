#include <iostream>
using namespace std;

int mySqrt(int x) {
    int low = 0;
    int high = x;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        long long longmid = (long long) mid;
        long long longx = (long long) x;
        if((longmid * longmid) == longx) {
            return mid;
        }
        else if((longmid * longmid) > longx) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return high;
}
// LEETCODE 69 (EASY)
int main(void) {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int root = mySqrt(n);
    cout << "Square root: " << root;
    return 0;
}