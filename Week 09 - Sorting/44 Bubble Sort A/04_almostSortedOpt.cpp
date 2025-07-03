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
    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(i == j) {
                continue;
            }
            if(arr[j] > arr[i]) {
                count++;
            }
        }
        int real = n - count - 1;
        if(real == 0) {
            if((arr[i] != arr[real]) && (arr[i] != arr[real + 1])) {
                flag = false;
                break;
            }
        }
        else if(real == n) {
            if((arr[i] != arr[real]) && (arr[i] != arr[real - 1])) {
                flag = false;
                break;
            }
        }
        else {
            if((arr[i] != arr[real]) && (arr[i] != arr[real - 1]) && (arr[i] != arr[real + 1])) {
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