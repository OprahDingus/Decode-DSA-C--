#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int i = 0;
    while(i < n) {
        int correctIdx = nums[i];
        if((correctIdx == i) || (nums[i] == n)) {
            i++;
        }
        else {
            swap(nums[i], nums[correctIdx]);
        }
    }
    for(int i = 0; i < n; i++) {
        if(nums[i] != i) {
            return i;
        }
    }
    return n;
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