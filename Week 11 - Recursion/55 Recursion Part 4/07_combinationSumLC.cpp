#include <iostream>
#include <vector>
using namespace std;

void combination(vector<vector<int>>& ans, vector<int> v, vector<int>& candidates, int target, int idx) {
    if(target == 0) {
        ans.push_back(v);
        return;
    }
    if(target < 0) {
        return;
    }
    for(int i = idx; i < candidates.size(); i++) {
        v.push_back(candidates[i]);
        combination(ans, v, candidates, target - candidates[i], i);
        v.pop_back();
    }
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> ans;
    vector<int> v;
    combination(ans, v, candidates, target, 0);
    return ans;
}
// LEETCODE 39 (MEDIUM)
int main(void) {
    int n;
    cout << "Enter Array size: ";
    cin >> n;
    vector<int> candidates(n);
    cout << "Enter Array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> candidates[i];
    }
    int target;
    cout << "Enter target: ";
    cin >> target;
    vector< vector<int> > ans = combinationSum(candidates, target);
    for(int i = 0; i < ans.size(); i++) {
        for(int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}