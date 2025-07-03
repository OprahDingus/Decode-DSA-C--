#include <iostream>
using namespace std;

int main(void) {
    int m, n;
    cout << "Enter rows and colums: ";
    cin >> m >> n;
    int array[m][n];
    cout << "Enter Matrix elements: ";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> array[i][j];
        }
    }
    cout << "Wave print order: ";
    for(int i = 0; i < m; i++) {
        if(i % 2 == 0) {
            for(int j = m - 1; j >= 0; j--) {
                cout << array[j][i] << " ";
            }
        }
        else {
            for(int j = 0; j < m; j++) {
                cout << array[j][i] << " ";
            }
        }
    }
    return 0;
}