#include <iostream>
using namespace std;

int main(void) {
    int m, n;
    cout << "Enter rows and columns: ";
    cin >> m >> n;
    int array[m][n];
    cout << "Enter Array elements: ";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> array[i][j];
        }
    }
    int x1, y1, x2, y2;
    cout << "Enter co-ordinate 1: ";
    cin >> x1 >> y1;
    cout << "Enter co-ordinate 2: ";
    cin >> x2 >> y2;
    int sum = 0;
    for(int i = x1; i <= x2; i++) {
        for(int j = y1; j <= y2; j++) {
            sum = sum + array[i][j];
        }
    }
    cout << "The sum of Sub-Array elements: " << sum;
}