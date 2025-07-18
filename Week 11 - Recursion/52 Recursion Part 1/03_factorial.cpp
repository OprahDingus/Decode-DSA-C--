#include <iostream>
using namespace std;

int fact(int n) {
    if(n == 1) {
        return 1;
    }
    return n * fact(n - 1);
}

int main(void) {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial of " << n << " is: " << fact(n);
    return 0;
}