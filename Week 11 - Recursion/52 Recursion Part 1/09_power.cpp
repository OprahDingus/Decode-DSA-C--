#include <iostream>
using namespace std;

int power(int a, int b) {
    if(b == 0) {
        return 1;
    }
    return a * power(a, b - 1);
}

int main(void) {
    int a, b;
    cout << "Enter base and exponent: ";
    cin >> a >> b;
    cout << a << " raised to " << b << " is: " << power(a, b);
    return 0;
}