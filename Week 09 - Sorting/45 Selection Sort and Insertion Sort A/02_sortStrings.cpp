#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string arr[] = {"raghav", "harsh", "sanket", "urvi", "vishwa", "hitesh"};
    int n = 6;
    cout << "Before sorting: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    // bubble sort
    for(int i = 0; i < n - 1; i++) {
        bool flag = true;
        for(int j = 0; j < n - 1 - i; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                flag = false;
            }
        }
        if(flag == true) {
            break;
        }
    }
    cout << "After sorting: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}