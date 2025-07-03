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

void quickSort(vector<int>& v, int start, int end) {
    if(start >= end) {
        return;
    }
    int pivotIdx = partition(v, start, end);
    quickSort(v, start, pivotIdx - 1);
    quickSort(v, pivotIdx + 1, end);
}

int main(void) {
    int n; 
    cout << "Enter Array size: "; // {5, 1, 8, 2, 7, 6, 3, 4, -8}
    cin >> n;
    vector<int> v(n);
    cout << "Enter Array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout << "Before Sorting: ";
    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    quickSort(v, 0, n - 1);
    cout << "After Sorting: ";
    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    return 0;
}