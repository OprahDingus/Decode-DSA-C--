#include <iostream>
using namespace std;

int main(void) {
    int m, n;
    cout << "Enter rows and columns of Matrix 1: ";
    cin >> m >> n;
    int p, q;
    cout << "Enter rows and columns of Matrix 2: ";
    cin >> p >> q;
    if(n == p) {
        int array1[m][n];
        int array2[p][q];
        cout << "Enter elements of first Matrix: ";
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                cin >> array1[i][j];
            }
        }
        cout << "Enter elements of second Matrix: ";
        for(int i = 0; i < p; i++) {
            for(int j = 0; j < q; j++) {
                cin >> array2[i][j];
            }
        }
        int result[m][q];
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < q; j++) {
                result[i][j] = 0;
                for(int k = 0; k < p; k++) {
                    result[i][j] = result[i][j] + (array1[i][k] * array2[k][j]);
                }
            }
        }
        cout << "Multiplied Matrix is: " << endl;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < q; j++) {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    }
    else {
        cout << "Matrices cannot be multiplied";
    }
}