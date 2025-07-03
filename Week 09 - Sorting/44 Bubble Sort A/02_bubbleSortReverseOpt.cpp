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
    cout << "Before sorting: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    for(int i = 0; i < n - 1; i++) {
        bool flag = true;
        for(int j = n - 1; j >= 1 + i; j--) {
            if(arr[j] > arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
                flag = false;
            }
        }
        if(flag == true) {
            break;
        }
    } 
    cout << endl << "After sorting: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

// [5, -4, 0, 3, 26, 1, 99, -80]