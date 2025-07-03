#include <iostream>
#include <vector>
using namespace std;

int a = 0;

void merge(vector<int>& v, int low, int mid, int high) {
    int i = low;
    int j = mid + 1;
    while((i <= mid) && (j <= high)) {
        if((long long int) v[i] > (long long int) 2 * v[j]) {
            a += mid - i + 1;
            j++;
        }
        else {
            i++;
        }
    }
    i = low;
    j = mid + 1;
    vector<int> ans;
    while((i <= mid) && (j <= high)) {
        if(v[i] < v[j]) {
            ans.push_back(v[i++]);
        }
        else {
            ans.push_back(v[j++]);
        }
    }
    while(i <= mid) {
        ans.push_back(v[i++]);
    }
    while(j <= high) {
        ans.push_back(v[j++]);
    }
    for(int i = low; i <= high; i++) {
        v[i] = ans[i - low];
    }
}

void mergeSort(vector<int>& v, int low, int high) {
    if(low == high) {
        return;
    }
    int mid = (low + high) / 2;
    mergeSort(v, low, mid);
    mergeSort(v, mid, high + 1);
    merge(v, low, mid, high);
}

int reversePairs(vector<int>& nums) {
    mergeSort(nums, 0, nums.size() - 1);
    return a; 
}

int main(void) {
    int n;
    cout << "Enter vector size: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter vector: ";
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout << "Total Reverse Pairs: " << reversePairs(v);
    return 0;
}