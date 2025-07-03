#include <iostream>
using namespace std;

void zigzag(int n) {
    if(n == 0) {
        return;
    }
    cout << n;
    zigzag(n - 1);
    cout << n;
    zigzag(n - 1);
    cout << n;
}

int main(void) {
    int n;
    cout << "Enter number: ";
    cin >> n;
    zigzag(n);
    return 0;
}