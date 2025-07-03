#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) {
    int n = nums.size();
    for(int i = 0; i < n; i++) {
        int count = 1;
        for(int j = i + 1; j < n; j++) {
            if(nums[i] == nums[j]) {
                count++;
            }
        }
        if(count > (n / 2)) {
            return nums[i];
        }
    }
    return -1;
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
    if(major == -1) {
        cout << "No Majority element exists";
    }
    else {
        cout << "Majority element in the array: " << major;
    }
    return 0;
}