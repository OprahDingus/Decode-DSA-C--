#include <iostream>
using namespace std;

int main(void) {
    int m, n;
    cout << "Enter rows and columns: ";
    cin >> m >> n;
    cout << "Enter Matrix elements: ";
    int array[m][n];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> array[i][j];
        }
    }
    cout << "Diagonals only: " << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if((i == j) || (i + j == m - 1)) {
                cout << array[i][j] << " ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}