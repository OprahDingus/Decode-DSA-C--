#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int actualSum = n * (n + 1) / 2;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += nums[i];
    }
    return actualSum - sum;
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