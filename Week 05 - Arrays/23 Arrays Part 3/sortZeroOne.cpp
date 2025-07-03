#include <iostream>
using namespace std;

void printArray(int array[], int n) {
    for(int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void sortZeroesAndOnes(int array[], int n) {
    int n0 = 0;
    int n1 = 0;
    for(int i = 0; i < n; i++) {
        if(array[i] == 0) {
            n0++;
        } 
        else {
            n1++;
        }
    }
    for(int i = 0; i < n; i++) {
        if(i < n0) {
            array[i] = 0;
        }
        else {
            array[i] = 1;
        }
    }
}

int main(void) {
    int n;
    cout << "Enter Array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter Array of zeroes and ones: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Before sorting: ";
    printArray(arr, n);
    sortZeroesAndOnes(arr, n);
    cout << "After sorting: ";
    printArray(arr, n);
    return 0;
}