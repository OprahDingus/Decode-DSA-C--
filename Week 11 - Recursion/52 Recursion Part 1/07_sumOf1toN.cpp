#include <iostream>
using namespace std;

int sumUptoK(int sum, int k) {
    if(k == 0) {
        return sum;
    }
    sumUptoK(sum + k, k - 1);
}

int main(void) {
    int k;
    cout << "Enter a number: ";
    cin >> k;
    cout << "Sum upto " << k << " is: " << sumUptoK(0, k);
    return 0;
}