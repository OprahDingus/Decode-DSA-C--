#include <iostream>
using namespace std;

int print(int a, int b) {
    if(a > b) {
        return 0;
    }
    return a + print(a + 2, b);
}

int main(void) {
    int a, b;
    cout << "Enter a and b (a < b): ";
    cin >> a >> b;
    if(a % 2 == 0) {
        a++;
    }
    cout << "Sum of odd numbers from " << a << " to " << b << " is: " << print(a, b);
    return 0;
}