#include <iostream>
using namespace std;

int main(void) {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for(int i = n; i >= 1; i++) {
        cout << i << endl;
    }
    return 0;
}