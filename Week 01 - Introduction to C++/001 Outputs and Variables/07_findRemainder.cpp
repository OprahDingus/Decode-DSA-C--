#include <iostream>
using namespace std;

int main(void) {
    int a = 16;
    int b = 3;
    int quotient = a / b;
    int remainder = a - (b * quotient);
    // remainder = a % b
    cout << "Remainder: " << remainder;
    return 0;
}