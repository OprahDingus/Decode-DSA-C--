#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int n = arr.size();
    int low = 1;
    int high = n - 2;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if((arr[mid] > arr[mid + 1]) && (arr[mid] > arr[mid - 1])) {
            return mid;
        }
        else if((arr[mid] > arr[mid + 1]) && (arr[mid] < arr[mid - 1])) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return -1;
}
// LEETCODE 852 (MEDIUM)
int main(void) {
    int n;
    cout << "Enter Array size: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter Array elements in Mountain order: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Peak Index: " << peakIndexInMountainArray(arr);
    return 0;
}