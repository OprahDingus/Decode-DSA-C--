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
    int brr[n];
    for(int i = 0; i < n; i++) {
        brr[i] = arr[i];
    }
    for(int i = 0; i < n - 1; i++) {
        bool flag = true;
        for(int j = 0; j < n - 1 - i; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                flag = false;
            }
        }
        if(flag == true) {
            break;
        }
    }
    bool flag = true;
    for(int i = 0; i < n; i++) {
        if(i == 0) {
            if((brr[i] != arr[i]) && (brr[i] != arr[i + 1])) {
                flag = false;
                break;
            }
        }
        else if(i == (n - 1)) {
            if((brr[i] != arr[i]) && (brr[i] != arr[i - 1])) {
                flag = false;
                break;
            } 
        }
        else {
            if((brr[i] != arr[i]) && (brr[i] != arr[i + 1]) && (brr[i] != arr[i - 1])) {
                flag = false;
                break;
            }
        }
    }
    if(flag == true) {
        cout << "This Array is almost sorted";
    }
    else {
        cout << "This Array is not almost sorted";
    }
    return 0;
}

// [4, 2, 7, 9, 8]