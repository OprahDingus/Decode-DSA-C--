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
    int ans = -1;
    int low = 0;
    int high = n - 1;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(arr[mid] == mid) {
            low = mid + 1;
        }
        else {
            ans = mid;
            high = mid - 1;
        }
    }
    if(ans == -1) {
        cout << "No missing numbers";
    }
    else {
        cout << "Smallest missing number: " << ans;
    }
    return 0;
}