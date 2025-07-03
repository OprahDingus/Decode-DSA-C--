#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int>& nums) {
    int n = nums.size();
    int i = 0;
    while(i < n) {
        int correctIdx = nums[i];
        if(nums[correctIdx] == nums[i]) {
            return nums[i];
        }
        else {
            swap(nums[i], nums[correctIdx]);
        }
    }
    return -9999;
}
// LEETCODE 287 (MEDIUM)
int main(void) {
    int n;
    cout << "Enter Array size: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter Array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << "Duplicate Number: " << findDuplicate(nums);
    return 0;
}