#include <iostream>
using namespace std;

int main(void) {
    int m, n;
    cout << "Enter rows and columns: ";
    cin >> m >> n;
    int a[m][n], b[m][n];
    cout << "Enter elements of first Matrix: ";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    cout << "Enter elements of second Matrix: ";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> b[i][j];
        }
    }
    cout << "The Sum Matrix is: " << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            b[i][j] = a[i][j] + b[i][j];
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}