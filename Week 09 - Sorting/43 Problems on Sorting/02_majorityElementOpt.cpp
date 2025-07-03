#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majorityElement(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    return nums[n / 2];
}
// LEETCODE 169 (EASY)
int main(void) {
    int n;
    cout << "Enter Array size: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter Array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int major = majorityElement(v);
    cout << "Majority element in the Array: " << major;
    return 0;
}