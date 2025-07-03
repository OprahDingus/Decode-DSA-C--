#include <iostream>
using namespace std;

void greet() {
    cout << "Good Morning\nHow are you?";
}

int product(int a, int b) {
    return a * b;
}

void gun() {
    // return;
    cout << "Hello CW" << endl;
}
void fun() {
    cout << "Hello PW" << endl;
    gun();
    // return;
}

int main(void) {
    // int x = product(2,4);
    // cout << x;
    // greet();
    fun();
    return 0;
}