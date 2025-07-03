#include <iostream>
using namespace std;

int main(void) {
    int n;
    cout << "Enter Array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter Array elements (sorted): ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int x;
    cout << "Enter number: ";
    cin >> x;
    int low = 0;
    int high = n - 1;
    bool flag = false;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(arr[mid] == x) {
            flag = true;
            cout << "Upper Bound: " << arr[mid - 1];
            break;
        }
        else if(arr[mid] < x) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    if(flag == false) {
        cout << "Upper Bound: " << arr[low];
    }
    return 0;
}