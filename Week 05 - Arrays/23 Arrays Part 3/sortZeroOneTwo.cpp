#include <iostream>
using namespace std;

void printArray(int array[], int n) {
    for(int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void sortZeroOneTwo(int array[], int n) {
    int n0 = 0;
    int n1 = 0;
    int n2 = 0;
    for(int i = 0; i < n; i++) {
        if(array[i] == 0) {
            n0++;
        }
        else if(array[i] == 1) {
            n1++;
        }
        else {
            n2++;
        }
    }
    for(int i = 0; i < n; i++) {
        if(i < n0) {
            array[i] = 0;
        }
        else if(i < (n0 + n1)) {
            array[i] = 1;
        }
        else {
            array[i] = 2;
        }
    }
}

int main(void) {
    int n;
    cout << "Enter Array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter 0s and 1s and 2s: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Before sorting: ";
    printArray(arr, n);
    sortZeroOneTwo(arr, n);
    cout << "After sorting: ";
    printArray(arr, n);
    return 0;
}