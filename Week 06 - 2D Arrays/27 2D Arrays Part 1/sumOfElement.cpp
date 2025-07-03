#include <iostream>
using namespace std;

int main(void) {
    int m, n;
    cout << "Enter rows: ";
    cin >> m;
    cout << "Enter columns: ";
    cin >> n;
    int array[m][n];
    cout << "Enter 2D Array elements: ";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> array[i][j];
        }
    }
    int sum = 0;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            sum = sum + array[i][j];
        }
    }
    cout << "Sum of Matrix elements: " << sum;
    return 0;
}