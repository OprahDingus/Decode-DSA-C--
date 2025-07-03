#include <iostream>
using namespace std;

int main(void) {
    int n;
    cout << "Enter Array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter Array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int x = 1;
    int firstId = -1;
    int low = 0;
    int high = n - 1;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(arr[mid] == x) {
            if(arr[mid - 1] != x) {
                firstId = mid;
                break;
            }
            else {
                high = mid - 1;
            }
        }
        else if(arr[mid] < x) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    if(firstId == -1) {
        cout << "Number of ones: " << 0;
    }
    else {
        cout << "Number of ones: " << (n - firstId);
    }
    return 0;
}