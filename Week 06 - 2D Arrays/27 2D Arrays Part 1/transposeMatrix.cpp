#include <iostream>
using namespace std;

int main(void) {
    int m, n;
    cout << "Enter rows and columns: ";
    cin >> m >> n;
    int array[m][n];
    cout << "Enter elements of Matrix: ";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> array[i][j];
        }
    }
    cout << "The transpose matrix is:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            // t[i][j] = a[j][i];
            cout << array[j][i] << " ";
        }
        cout << endl;
    }
}