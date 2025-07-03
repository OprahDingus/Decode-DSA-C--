#include <iostream>
#include <vector>
using namespace std;

void printSubset(int arr[], int n, int idx, vector<int> ans) {
    if(idx == n) {
        for(int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        return;
    }
    printSubset(arr, n, idx + 1, ans);
    ans.push_back(arr[idx]);
    printSubset(arr, n, idx + 1, ans);
}

int main(void) {
    int n;
    cout << "Enter Array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter Array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> v;
    printSubset(arr, n, 0, v);
    return 0;
}