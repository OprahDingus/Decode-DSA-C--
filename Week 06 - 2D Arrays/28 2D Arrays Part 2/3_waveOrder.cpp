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
    cout << "Wave order: " << endl;
    for(int i = 0; i < m; i++) {
        if((i % 2) == 0) {
            for(int j = 0; j < n; j++) {
                cout << array[i][j] << " ";
            }
        }
        else {
            for(int j = n - 1; j >= 0; j--) {
                cout << array[i][j] << " ";
            }
        }
        cout << endl;
    }
}