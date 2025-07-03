#include <iostream>
using namespace std;

void incDec(int x, int n) {
    if(x >= n) {
        cout << n << " ";
        return;
    }
    cout << x << " ";
    incDec(x + 1, n);
    cout << x << " ";
}

int main(void) {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    incDec(1, n);
    return 0;
}