#include <iostream>
using namespace std;

int main(void) {
    int m, n;
    cout << "Enter rows and columns: ";
    cin >> m >> n;
    int array[m][n];
    cout << "Enter Matrix elements: ";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> array[i][j];
        }
    }
    cout << "Column order: " << endl;
    for(int j = 0; j < n; j++) {
        for(int i = 0;i < m; i++) {
            cout << array[i][j] << " ";
        }
    }
}