#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& v, int low, int mid, int high) {
    vector<int> ans;
    int i = low;
    int j = mid + 1;
    while((i <= mid) && (j <= high)) {
        if(v[i] > v[j]) {
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
    mergeSort(v, mid + 1, high);
    merge(v, low, mid, high);
}

int main(void) {
    int n;
    cout << "Enter size of Array: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter elements of Array: "; 
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    mergeSort(v, 0, n - 1);
    cout << "Elements in reverse: ";
    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    return 0;
}