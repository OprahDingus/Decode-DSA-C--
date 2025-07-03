#include <iostream>
using namespace std;

int main(void) {
    int m, n;
    cout << "Enter rows and columns: ";
    cin >> m >> n;
    int array[m][n];
    cout << "Enter Matrix columns: ";
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
    for(int k = 0; k < n; k++) {
        int i = 0;
        int j = n - 1;
        while(i <= j) {
            int temp = array[k][i];
            array[k][i] = array[k][j];
            array[k][j] = temp;
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
}