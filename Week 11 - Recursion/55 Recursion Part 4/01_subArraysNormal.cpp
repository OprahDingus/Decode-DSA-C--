#include <iostream>
using namespace std;

int main(void) {
    int n;
    cout << "Enter Array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter Array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++) {
        for(int k = i; k < n; k++) {
            for(int j = i; j <= k; j++) {
                cout << arr[j];
            }
            cout << endl;
        }
    }
    return 0;
}