#include <iostream>
#include <vector>
using namespace std;

void subArray(vector<int> v, int arr[], int n, int idx) {
    if (idx == n) {
        for (int i = 0; i < v.size(); i++) {
            cout << v[i];
        }
        cout << endl;
        return;
    }
    subArray(v, arr, n, idx + 1);
    if((v.size() == 0) || (arr[idx - 1] == v[v.size() - 1])) {
        v.push_back(arr[idx]);
        subArray(v, arr, n, idx + 1);
    }
}

int main(void) {
    int n;
    cout << "Enter Array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter Array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> v;
    subArray(v, arr, n, 0);
    return 0;
}