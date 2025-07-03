#include <iostream>
#include <vector>
using namespace std;

int count = 0;

int inversion(vector<int>& a, vector<int>& b) {
    int c = 0;
    int i = 0;
    int j = 0;
    while((i < a.size()) && (j < b.size())) {
        if(a[i] > b[j]) {
            c = c + (a.size() - i);
            j++;
        }
        else {
            i++;
        }
    }
    return c;
}

void merge(vector<int>& a, vector<int>& b, vector<int>& res) {
    int i = 0;
    int j = 0;
    int k = 0;
    while((i < a.size()) && (j < b.size())) {
        if(a[i] <= b[j]) {
            res[k++] = a[i++];
        }
        else {
            res[k++] = b[j++];
        }
    }
    if(i == a.size()) {
        while(j < b.size()) {
            res[k++] = b[j++];
        }
    }
    if(j == b.size()) {
        while(i < a.size()) {
            res[k++] = a[i++];
        }
    }
}

void mergeSort(vector<int>& v) {
    int n = v.size();
    if(n == 1) {
        return;
    }
    int n1 = n / 2;
    int n2 = n - n / 2;
    vector<int> a(n1), b(n2);
    for(int i = 0; i < n1; i++) {
        a[i] = v[i];
    }
    for(int i = 0; i < n2; i++) {
        b[i] = v[i + n1];
    }
    mergeSort(a);
    mergeSort(b);
    count = count + inversion(a, b);
    merge(a, b, v);
    a.clear();
    b.clear();
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
    mergeSort(v);
    cout << "Total combination: " << count;
    return 0;
}

// {5, 1, 3, 0, 4, 9, 6}