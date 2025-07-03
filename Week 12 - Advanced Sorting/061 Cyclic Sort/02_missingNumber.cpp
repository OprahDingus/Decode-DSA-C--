#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    vector<bool> check(n + 1, false);
    for(int i = 0; i < n; i++) {
        int ele = nums[i];
        check[ele] = true;
    }
    for(int i = 0; i <= n; i++) {
        if(check[i] == false) {
            return i;
        }
    }
    return -9999;
}
// LEETCODE 268 (EASY)
int main(void) {
    int n;
    cout << "Enter Array size: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter Array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << "Missing Number: " << missingNumber(nums);
    return 0;
}