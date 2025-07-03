#include <iostream>
using namespace std;

int main(void) {
    int m;
    cout << "Enter rows: ";
    cin >> m;
    int array[m][m];
    int minr = 0, minc = 0;
    int maxr = m - 1, maxc = m - 1;
    int count = 0;
    int total = m * m;
    int a = 1;
    while((minr <= maxr) && (minc <= maxc)) {
        // right
        for(int j = minc; j <= maxc && count < total; j++) {
            array[minr][j] = a++;
            count++;
        }
        minr++;
        // down
        for(int j = minr; j <= maxr && count < total; j++) {
            array[j][maxc] = a++;
            count++;
        }
        maxc--;
        // left
        for(int j = maxc; j >= minc && count < total; j--) {
            array[maxr][j] = a++;
            count++;
        }
        maxr--;
        // up
        for(int j = maxr; j >= minr && count < total; j--) {
            array[j][minc] = a++;
            count++;
        }
        minc++;
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < m; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}