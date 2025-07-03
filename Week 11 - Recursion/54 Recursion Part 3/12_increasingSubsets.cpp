#include <iostream>
#include <vector>
using namespace std;

void printSubset(int arr[], int n, int idx, vector<int> ans, int k) {
    if(idx == n) {
        if(ans.size() == k) {
            for(int i = 0; i < ans.size(); i++) {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
        return;
    }
    printSubset(arr, n, idx + 1, ans, k);
    ans.push_back(arr[idx]);
    printSubset(arr, n, idx + 1, ans, k);
}

int main(void) {
    int n, k;
    cout << "Enter Array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter Array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> v;
    cout << "Enter SubArray size: ";
    cin >> k;
    printSubset(arr, n, 0, v, k);
    return 0;
}