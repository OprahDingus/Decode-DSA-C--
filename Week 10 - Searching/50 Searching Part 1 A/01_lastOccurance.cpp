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
    int x;
    cout << "Enter target: ";
    cin >> x;
    int low = 0;
    int high = n - 1;
    bool flag = false;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(arr[mid] == x) {
            if(arr[mid + 1] != x) {
                flag = true;
                cout << "Last occurance index: " << mid;
                break;
            }
            else {
                low = mid + 1;
            }
        }
        else if(arr[mid] < x) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    if(flag == false) {
        cout << "Element does not exist";
    }
    return 0;
}