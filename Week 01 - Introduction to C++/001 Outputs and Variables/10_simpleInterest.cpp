#include <iostream>
using namespace std;

int main(void) {
    float principal, rate, time, simple;
    principal = 100;
    rate = 2.2;
    time = 2;
    simple = (principal * rate * time) / 100;
    cout << "Simple Interest: " << simple << endl;
    return 0;
}