#include <iostream>
#include <vector>
using namespace std;

void helper(vector<int>& nums, vector<int> ans, vector<vector<int>>& finalAns, int idx) {
    if(idx == nums.size()) {
        finalAns.push_back(ans); 
        return;
    }
    helper(nums, ans, finalAns, idx + 1);
    ans.push_back(nums[idx]);
    helper(nums, ans, finalAns, idx + 1);
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<int> ans;
    vector<vector<int>> finalAns;
    helper(nums, ans, finalAns, 0);
    return finalAns;
}
// LEETCODE 78 (MEDIUM)
int main(void) {
    int n;
    cout << "Enter Vector size: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter Vector elements: ";
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<vector<int>> ans = subsets(v);
    for(int i = 0; i < ans.size(); i++) {
        for(int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}