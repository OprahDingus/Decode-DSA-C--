#include <iostream>
using namespace std;

int main(void) {
    int n;
    cout << "Enter total students: ";
    cin >> n;
    int array[n][2];
    for(int i = 0; i < n; i++) {
        cout << "Enter roll number: ";
        cin >> array[i][0];
        cout << "Enter marks: ";
        cin >> array[i][1];
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 2; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}