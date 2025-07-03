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
    cout << "Spiral Order: " << endl;
    int minr = 0, minc = 0;
    int maxr = m - 1, maxc = n - 1;
    int total = m * n;
    int count = 0;
    while((minr <= maxr) && (minc <= maxc)) {
        // right
        for(int j = minc; j <= maxc && count < total; j++) {
            cout << array[minr][j] << " ";
            count++;
        }
        minr++;
        // down
        for(int j = minr; j <= maxr && count < total; j++) {
            cout << array[j][maxc] << " ";
            count++;
        }
        maxc--;
        // left
        for(int j = maxc; j >= minc && count < total; j--) {
            cout << array[maxr][j] << " ";
            count++;
        }
        maxr--;
        // up
        for(int j = maxr; j >= minr && count < total; j--) {
            cout << array[j][minc] << " ";
            count++;
        }
        minc++;
    }
}