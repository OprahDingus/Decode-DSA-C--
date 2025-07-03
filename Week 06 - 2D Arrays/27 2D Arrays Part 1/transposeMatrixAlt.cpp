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
    cout << "The original matrix is:" << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    for(int i = 0; i < m; i++) {
        for(int j = i + 1; j < n; j++) {
            int temp = array[i][j];
            array[i][j] = array[j][i];
            array[j][i] = temp;
        }
    }
    cout << "The transpose matrix is:" << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}