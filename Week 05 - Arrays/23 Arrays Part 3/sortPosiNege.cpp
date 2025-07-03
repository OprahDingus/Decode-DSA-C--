#include <iostream>
using namespace std;

void printArray(int array[], int n) {
    for(int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void sortZeroesAndOnes(int array[], int n) {
    int i = 0;
    int j = n - 1;
    while(i < j) {
        if(array[i] < 0) {
            i++;
        }
        if(array[j] > 0) {
            j--;
        }
        if((array[i] > 0) && (array[j] < 0)) {
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j--;
        }
    }
}

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
    printArray(arr, n);
    sortZeroesAndOnes(arr, n);
    cout << "After sorting: ";
    printArray(arr, n);
    return 0;
}