#include <iostream>
using namespace std;

int stairs(int n) {
    if(n == 2) {
        return 2;
    }
    if(n == 1) {
        return 1;
    }
    return stairs(n - 1) + stairs(n - 2);
}

int main(void) {
    int n;
    cout << "Enter number of stairs: ";
    cin >> n;
    cout << "Total possible ways: " << stairs(n);
    return 0;
}