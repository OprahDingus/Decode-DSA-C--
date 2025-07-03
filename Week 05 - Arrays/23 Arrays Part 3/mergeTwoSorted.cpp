#include <iostream>
using namespace std;

void printArray(int array[], int n) {
    for(int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void mergeTwoSorted(int array1[], int n, int array2[], int m, int array3[]) {
    int i = 0;
    int j = 0;
    int k = 0;
    while((i <= n - 1) && (j <= m - 1)) {
        if(array1[i] < array2[j]) {
            array3[k] = array1[i];
            i++;
        }
        else {
            array3[i] = array2[j];
            j++;
        }
        k++;
    }
    if(i == n) {
        while(j <= m - 1) {
            array3[k] = array2[j];
            k++;
            j++;
        }
    }
    if(j == m) {
        while(i <= n - 1) {
            array3[k] = array1[i];
            k++;
            i++;
        }
    }
}

int main(void) {
    int m, n;
    cout << "Enter size of first array: ";
    cin >> n;
    int array1[n];
    cout << "Enter elements of first array (sorted): ";
    for(int i = 0; i < n; i++) {
        cin >> array1[i];
    }
    cout << "Enter size of second array: ";
    cin >> m;
    int array2[m];
    cout << "Enter elements of second array (sorted): ";
    for(int i = 0; i < n; i++) {
        cin >> array2[i];
    }
    int array3[n + m];
    mergeTwoSorted(array1, n, array2, m, array3);
    cout << "First Array: ";
    printArray(array1, n);
    cout << "Second Array: ";
    printArray(array2, m);
    cout << "Merged Array: ";
    printArray(array3, m + n);
}