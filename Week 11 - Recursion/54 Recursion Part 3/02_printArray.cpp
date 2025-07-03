#include <iostream>
#include <vector>
using namespace std;

void display1(int arr[], int n, int idx) {
    if(idx == n) {
        return;
    }
    cout << arr[idx] << " ";
    display1(arr, n, idx + 1);
}

void display2(vector<int>& v, int idx) {
    if(idx == v.size()) {
        return;
    }
    cout << v[idx] << " ";
    display2(v, idx + 1);
}

int main(void) {
    // int arr[] = {2, 1, 6, 3, 9, 0, 2, 7};
    // int n = sizeof(arr) / sizeof(arr[0]);
    int n;
    cout << "Enter Array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter Array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    display1(arr, n, 0);
    vector<int> v(n);
    cout << "\nEnter Vector elements: ";
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    display2(v, 0);
    return 0;
}