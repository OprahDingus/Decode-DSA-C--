#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& a, vector<int>& b, vector<int>& res) {
    int i = 0; // a
    int j = 0; // b
    int k = 0; // res
    while((i < a.size()) && (j < b.size())) {
        if(a[i] < b[j]) {
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

int main(void) {
    int n1, n2;
    cout << "Enter size of Array 1: ";
    cin >> n1;
    vector<int> a(n1);
    cout << "Enter elements of Array 1: "; // {1, 4, 5, 8}
    for(int i = 0; i < n1; i++) {
        cin >> a[i];
    }
    cout << "Enter size of Array 2: ";
    cin >> n2;
    vector<int> b(n2);
    cout << "Enter elements of Array 2: "; // {2, 3, 6, 7, 10, 12}
    for(int i = 0; i < n2; i++) {
        cin >> b[i];
    }
    vector<int> res(n1 + n2);
    merge(a, b, res);
    for(int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    return 0;
}