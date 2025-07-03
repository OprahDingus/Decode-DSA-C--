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
    bool flag = true;
    for(int i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            flag = false;
            break;
        }
    }
    if(flag == true) {
        cout << "Array is Sorted";
    }
    else {
        cout << "Array is not Sorted";
    }
    return 0;
}