#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if(a == 0) {
        return b;
    }
    else {
        return gcd(b % a, a);
    }
}

int main(void) {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "The GCD: " << gcd(a, b);
    // cout << "The GCD: " << gcd(min(a, b), max(a, b));
    return 0;
}