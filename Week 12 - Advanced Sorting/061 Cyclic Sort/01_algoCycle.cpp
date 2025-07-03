#include <iostream>
using namespace std;

int main(void) {
    int n;
    cout << "Enter Array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter Array elements: "; // {4, 1, 6, 2, 5, 3}
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Before sorting: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int i = 0;
    while(i < n) {
        int correctIdx = arr[i] - 1;
        if(i == correctIdx) {
            i++;
        }
        else {
            swap(arr[i], arr[correctIdx]);
        }
    }
    cout << "After sorting: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}