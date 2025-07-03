#include <iostream>
using namespace std;

int main(void) {
    int m, n;
    cout << "Enter rows and columns: ";
    cin >> m >> n;
    int array1[m][n], array2[m][n];
    cout << "Enter elements of Matrix 1: ";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> array1[i][j];
        }
    }
    cout << "Enter elements of Matrix 2: ";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> array2[i][j];
        }
    }
    int result[m][n];
    cout << "Result Matrix:" << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            result[i][j] = array1[i][j] + array2[i][j];
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}