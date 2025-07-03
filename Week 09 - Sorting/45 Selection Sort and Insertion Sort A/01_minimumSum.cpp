#include <iostream>
using namespace std;

int main(void) {
    int n;
    cout << "Enter Array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter Array elements: ";
    for(int i = 0 ; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Original Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    // insertion sort
    for(int i = 1; i < n; i++) {
        int j = i;
        while((j >= 1) && (arr[j] < arr[j - 1])) {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }
    // storing array into number
    int num = 0;
    for(int i = 0; i < n; i++) {
        num *= 10;
        num += arr[i];
    }
    // for second minimum
    for(int i = n - 1; i >= 1; i--) {
        if(arr[i] != arr[i - 1]) {
            swap(arr[i], arr[i - 1]);
            break;
        }
    }
    int numn = 0;
    for(int i = 0; i < n; i++) {
        numn *= 10;
        numn += arr[i];
    }
    cout << "First Smallest: " << num << endl;
    cout << "Second Smallest: " << numn << endl;
    cout << "Minimum sum: " << num + numn;
    return 0;
}