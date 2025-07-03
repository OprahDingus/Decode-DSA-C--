#include <iostream>
#include <climits>
using namespace std;

int main(void) {
    int arr[] = {5, 3, 1 , 4, 2};
    int n = 5;
    for(int ele : arr) {
        cout << ele << " ";
    }
    cout << endl;
    for(int i = 0; i < n - 1; i++) {
        int min = INT_MAX;
        int minIdx = -1;
        for(int j = i; j < n; j++) {
            if(arr[j] < min) {
                min = arr[j];
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
    for(int ele : arr) {
        cout << ele << " ";
    }
    return 0;
}