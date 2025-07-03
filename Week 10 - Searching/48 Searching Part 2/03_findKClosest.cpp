#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    int n = arr.size();
    vector<int> ans(k);
    if(x < arr[0]) {
        for(int i = 0; i < k; i++) {
            ans[i] = arr[i];
        }
        return ans;
    }
    if(x > arr[n - 1]) {
        int i = n - 1;
        int j = k - 1;
        while(j >= 0) {
            ans[j] = arr[i];
            j--;
            i--;
        }
        return ans;
    }
    int low = 0;
    int high = n - 1;
    bool flag = false;
    int t = 0;
    int mid = -1;
    while(low <= high) {
        mid = low + (high - low) / 2;
        if(arr[mid] == x) {
            flag = true;
            ans[t] = arr[mid];
            t++;
            break;
        }
        else if(arr[mid] > x) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    int lower = high;
    int upper = low;
    if(flag == true) {
        lower = mid - 1;
        upper = mid + 1;
    }
    while((t < k) && (lower >= 0) && (upper <= (n - 1))) {
        int d1 = abs(x - arr[lower]);
        int d2 = abs(x - arr[upper]);
        if(d1 <= d2) {
            ans[t] = arr[lower];
            lower--;
        }
        else {
            ans[t] = arr[upper];
            upper++;
        }
        t++;
    }
    if(lower < 0) {
        while(t < k) {
            ans[t] = arr[upper];
            upper++;
            t++;
        }
    }
    if(upper > (n - 1)) {
        while(t < k) {
            ans[t] = arr[lower];
            lower--;
            t++;
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}
// LEETCODE 658 (MEDIUM)
int main(void) {
    int n;
    cout << "Enter Array size: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter Array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int k, x;
    cout << "Enter value: ";
    cin >> x;
    cout << "Enter answer range: ";
    cin >> k;
    cout << "Closest elements to " << x << " are: ";
    vector<int> ans = findClosestElements(v, k, x);
    for(int i = 0; i < k; i++) {
        cout << ans[i] << " ";
    }
    return 0;
}