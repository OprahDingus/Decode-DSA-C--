#include <iostream>
using namespace std;

class Calculator {
public:
    int a, b;
    void addition(void) {
        cout << a + b << endl;
    }
    void subtraction(void) {
        cout << a - b << endl;
    }
    void multiplication(void) {
        cout << a * b << endl;
    }
    void division(void) {
        cout << a / b << endl;
    }
};

int main(void) {
    Calculator cal;
    cal.a = 10;
    cal.b = 7;
    cal.addition();
    cal.subtraction();
    return 0;
}