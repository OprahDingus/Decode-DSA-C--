#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target) {
    int n = nums.size();
    int low = 0;
    int high = n - 1;
    int pivot = -1;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(mid == 0) {
            low = mid + 1;
        }
        else if(mid == (n - 1)) {
            high = mid - 1;
        }
        else if((nums[mid] < nums[mid + 1]) && (nums[mid] < nums[mid - 1])) {
            pivot = mid;
            break;
        }
        else if((nums[mid] > nums[mid + 1]) && (nums[mid] > nums[mid - 1])) {
            pivot = mid + 1;
            break;
        }
        else if(nums[mid] > nums[high]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    if(pivot == -1) {
        int low = 0;
        int high = n - 1;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(nums[mid] == target) {
                return mid;
            }
            else if(nums[mid] > target) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return -1;
    }
    else if((target >= nums[0]) && (target <= nums[pivot - 1])) {
        int low = 0;
        int high = pivot - 1;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(nums[mid] == target) {
                return mid;
            }
            else if(nums[mid] > target) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
    }
    else {
        int low = pivot;
        int high = n - 1;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(nums[mid] == target) {
                return mid;
            }
            else if(nums[mid] > target) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
    }
    return -1;
}
// LEETCODE 33 (MEDIUM)
int main(void) {
    int n;
    cout << "Enter Array size: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter Array elements in Rotated order: ";
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int target;
    cout << "Enter number to search: ";
    cin >> target;
    cout << "Target is at index: " << search(v, target);
    return 0;
}



// 1 2 3 4 5

// 4 5 1 2 3