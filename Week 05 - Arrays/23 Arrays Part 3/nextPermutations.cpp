#include <iostream>
using namespace std;

void printArray(int array[], int n) {
    for(int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void reverse(int array[], int i, int j) {
    while(i <= j) {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
        i++;
        j--;
    }
    return;
}

void nextPermutation(int array[], int n) {
    int idx = -1;
    for(int i = n - 2; i >= 0; i--) {
        if(array[i] < array[i + 1]) {
            idx = i;
            break;
        }
    }
    if(idx == -1) {
        reverse(array, 0, n - 1);
        return;
    }
    reverse(array, 0 + idx + 1, n - 1);
    int temp = array[idx];
    array[idx] = array[idx + 1];
    array[idx + 1] = temp;
    return;
}

int main(void) {
    int n;
    cout << "Enter Array length: ";
    cin >> n;
    int array[n];
    cout << "Enter Array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> array[i];
    }
    cout << "Original Array: ";
    printArray(array, n);
    nextPermutation(array, n);
    cout << "Next Permutation: ";
    printArray(array, n);
    return 0;
}