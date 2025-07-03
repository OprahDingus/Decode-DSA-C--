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
    int k;
    cout << "Enter value of k: ";
    cin >> k;
    for(int i = 0; i < k; i++) {
        int min = arr[i];
        int minId = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < min) {
                min = arr[j];
                minId = j;
            }
        }
        swap(arr[i], arr[minId]);
    }
    cout << k << "th smallest element: " << arr[k - 1];
    return 0;
}