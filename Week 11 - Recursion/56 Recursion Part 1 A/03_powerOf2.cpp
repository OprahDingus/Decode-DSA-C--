#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    if(n == 1) {
        return true;
    }
    if((n == 0) || (n % 2 != 0)) {
        return false;
    }
    return isPowerOfTwo(n / 2);
}
// LEETCODE 231
int main(void) {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(isPowerOfTwo(num)) {
        cout << "It is a power of 2";
    }
    else {
        cout << "It is not a power of two";
    }
    return 0;
}