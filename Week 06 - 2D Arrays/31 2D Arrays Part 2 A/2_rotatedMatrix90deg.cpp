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
    for(int c = 0; c < m; c++) {
        int i = 0;
        int j = m - 1;
        while(i < j) {
            int temp = array[i][c];
            array[i][c] = array[j][c];
            array[j][c] = temp;
            i++;
            j--;
        }
    }
    cout << "The 90 rotated matrix is:" << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}