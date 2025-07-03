#include <iostream>
using namespace std;

int binarySearch(int arr[], int find, int size) {
    int low = 0;
    int high = size - 1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == find) {
            return mid;
        }
        else if(arr[mid] < find) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}
// LEETCODE 704 (EASY)
int main(void) {
    int n;
    cout << "Enter Array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter Array elements (sorted): ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int find;
    cout << "Enter number to search: ";
    cin >> find;
    int place = binarySearch(arr, find, n);
    if(place == -1) {
        cout << "Number not found";
    }
    else {
        cout << "Number found at index " << place;
    }
    return 0;
}