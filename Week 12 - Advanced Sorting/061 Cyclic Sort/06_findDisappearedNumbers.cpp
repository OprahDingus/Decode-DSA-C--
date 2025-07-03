#include <iostream>
#include <vector>
using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums) {
    int n = nums.size();
    int i = 0;
    while(i < n) {
        int correctIdx = nums[i] - 1;
        if((nums[correctIdx] == nums[i] || (correctIdx == i))) {
            i++;
        }
        else {
            swap(nums[i], nums[correctIdx]);
        }
    }
    vector<int> ans;
    for(int i = 0; i < n; i++) {
        if(nums[i] != (i + 1)) {
            ans.push_back(i + 1);
        }
    }
    return ans;
}
// LEETCODE 448 (EASY)
int main(void) {
    int n;
    cout << "Enter Array size: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter Array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<int> ans = findDisappearedNumbers(v);
    cout << "Disappeared Numbers are: ";
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}