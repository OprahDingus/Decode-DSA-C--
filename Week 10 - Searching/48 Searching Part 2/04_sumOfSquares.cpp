#include <iostream>
#include <cmath>
using namespace std;

bool isPerfectSquare(int n) {
    int root = sqrt(n);
    if((root * root) == n) {
        return true;
    }
    else {
        return false;
    }
}

bool judgeSquareSum(int c) {
    int x = 0;
    int y = c;
    while(x <= y) {
        if(isPerfectSquare(x) && isPerfectSquare(y)) {
            return true;
        }
        else if(!isPerfectSquare(y)) {
            y = (int)sqrt(y) * (int)sqrt(y);
            x = c - y;
        }
        else {
            x = ((int)sqrt(x) + 1) * ((int)sqrt(x) + 1);
            y = c - x;
        }
    }
    return false;
}
// LEETCODE 633 (MEDIUM)
int main(void) {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(judgeSquareSum(n)) {
        cout << "It is a sum of squares";
    } 
    else {
        cout << "It is not a sum of squares";
    }
    return 0;
}