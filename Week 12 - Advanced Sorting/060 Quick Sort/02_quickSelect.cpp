#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& v, int start, int end) {
    int pivot = v[start];
    int count = 0;
    for(int i = start + 1; i <= end; i++) {
        if(v[i] <= pivot) {
            count++;
        }
    }
    int pivotIdx = count + start;
    swap(v[start], v[pivotIdx]);
    int i = start;
    int j = end;
    while((i < pivotIdx) && (j > pivotIdx)) {
        if(v[i] <= pivot) {
            i++;
        }
        if(v[j] > pivot) {
            j--;
        }
        else if((v[i] > pivot) && (v[j] <= pivot)) {
            swap(v[i], v[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}

int kthSmallest(vector<int>& v, int start, int end, int k) {
    int pivotIdx = partition(v, start, end);
    if((pivotIdx + 1) == k) {
        return v[pivotIdx];
    }
    else if((pivotIdx + 1) < k) {
        return kthSmallest(v, pivotIdx + 1, end, k);
    }
    else {
        return kthSmallest(v, start, pivotIdx - 1, k);
    }
}

int main(void) {
    int n, k; 
    cout << "Enter Array size: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter Array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout << "Enter value of k: ";
    cin >> k;
    cout << k << "th smallest element: " << kthSmallest(v, 0, n - 1, k);
    return 0;
}