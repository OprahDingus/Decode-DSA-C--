#include <iostream>
using namespace std;

bool isPerfectSquare(int num) {
    int low = 0;
    int high = num;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        long long longmid = (long long) mid;
        long long longnum = (long long) num;
        if((longmid * longmid) == longnum) {
            return true;
        }
        else if((longmid * longmid) > longnum) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return false;
}
// LEETCODE 367 (EASY)
int main(void) {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(isPerfectSquare(n)) {
        cout << "It is a perfect square";
    }
    else {
        cout << "It is not a perfct square";
    }
    return 0;
}