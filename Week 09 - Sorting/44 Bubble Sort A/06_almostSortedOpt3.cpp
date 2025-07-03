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
    for(int i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
            i++;
        }
    }
    bool flag = true;
    for(int i = 0; i < n; i++) {
        if(arr[i] > arr[i + 1]) {
            flag = false;
            break;
        }
    }
    if(flag == true) {
        cout << "The Array is almost sorted";
    }
    else {
        cout << "The Array is not almost sorted";
    }
    return 0;
}