#include <iostream>
using namespace std;

void printArray(int array[], int n) {
    for(int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void sortZeroOneTwo(int array[], int n) {
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while(mid <= high) {
        if(array[mid] == 2) {
            int temp = array[mid];
            array[mid] = array[high];
            array[high] = temp;
            high--;
        }
        else if(array[mid] == 0) {
            int temp = array[mid];
            array[mid] = array[low];
            array[low] = temp;
            low++;
            mid++;
        }
        else {
            mid++;
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