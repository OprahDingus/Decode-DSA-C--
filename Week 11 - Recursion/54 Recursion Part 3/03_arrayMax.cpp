#include <iostream>
#include <climits>
using namespace std;

void findMax(int arr[], int n, int idx, int max) {
    if(idx == n) {
        cout << "Max element: " << max;
        return;
    }
    if(arr[idx] > max) {
        max = arr[idx];
    }
    findMax(arr, n, idx + 1, max);
}

// int maxInArray(int arr[], int n, int idx) {
//     if(idx == n) {
//         return INT_MIN;
//     }
//     return max(arr[idx], maxInArray(arr, n, idx + 1));
// }

int main(void) {
    int n;
    cout << "Enter Array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter Array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    findMax(arr, n, 0, INT_MIN);
    return 0;
}