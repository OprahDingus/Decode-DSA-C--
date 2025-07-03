#include <iostream>
using namespace std;

int main(void) {
    int n;
    cout << "Enter Array length: ";
    cin >> n;
    int arr[n];
    cout << "Enter Array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int low = 0;
    int high = n - 1;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(arr[mid] == (mid + 1)) {
            low = mid + 1;
        }
        else {
            if(arr[mid - 1] == arr[mid]) {
                cout << "Repeated element: " << arr[mid];
                break;
            }
            else {
                high = mid - 1;
            }
        }
    }
    return 0;
}