#include <iostream>
using namespace std;

int main(void) {
    int n;
    cout << "Enter rows: ";
    cin >> n;
    int m;
    cout << "Enter columns: ";
    cin >> m;
    cout << "Enter elements of 2D Array: ";
    int array[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> array[i][j];
        }
    }
    // output
    cout << "The matrix is:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}