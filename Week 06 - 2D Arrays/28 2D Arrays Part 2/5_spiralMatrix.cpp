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
    while((minr <= maxr) && (minc <= maxc)) {
        // right
        for(int j = minc; j <= maxc; j++) {
            cout << array[minr][j] << " ";
        }
        minr++;
        if((minr > maxr) || (minc > maxc)) break;
        // down
        for(int j = minr; j <= maxr; j++) {
            cout << array[j][maxc] << " ";
        }
        maxc--;
        if((minr > maxr) || (minc > maxc)) break;
        // left
        for(int j = maxc; j >= minc; j--) {
            cout << array[maxr][j] << " ";
        }
        maxr--;
        if((minr > maxr) || (minc > maxc)) break;
        // up
        for(int j = maxr; j >= minr; j--) {
            cout << array[j][minc] << " ";
        }
        minc++;
    }
}