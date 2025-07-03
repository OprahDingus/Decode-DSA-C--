#include <iostream>
#include <vector>
using namespace std;

vector<int> runningSum(vector<int>& nums) {
    for(int i = 1; i < nums.size(); i++) {
        nums[i] += nums[i - 1];
    }
    return nums;
}
// LEETCODE 1480 (EASY)
int main(void) {
    int n;
    cout << "Enter Array size: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter Array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<int> ans = runningSum(v);
    cout << "Running Sum Array: ";
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}