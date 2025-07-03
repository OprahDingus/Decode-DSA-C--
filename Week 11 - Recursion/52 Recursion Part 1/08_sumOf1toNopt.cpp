#include <iostream>
using namespace std;

int sumUptoK(int k) {
    if(k == 0) {
        return 0;
    }
    return k + sumUptoK(k - 1);
}

int main(void) {
    int k;
    cout << "Enter a number: ";
    cin >> k;
    cout << "Sum upto " << k << " is: " << sumUptoK(k);
    return 0;
}