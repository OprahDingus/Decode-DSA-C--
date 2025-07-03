#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main(void) {
    int n;
    cout << "Enter Array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter Array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Before: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    vector<int> v(n, 0);
    int x = 0;
    for(int i = 0; i < n; i++) {
        int min = INT_MAX;
        int mindx = -1;
        for(int j = 0; j < n; j++) {
            if(v[j] == 1) {
                continue;
            }
            else {
                if(min > arr[j]) {
                    min = arr[j];
                    mindx = j;
                }
            }
        }
        arr[mindx] = x;
        v[mindx] = 1;
        x++;
    }
    cout << "After: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}