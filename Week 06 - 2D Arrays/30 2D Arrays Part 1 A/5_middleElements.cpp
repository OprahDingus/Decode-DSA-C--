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
    cout << "The middle elements are: ";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if((i == (m / 2)) || (j == (n / 2))) {
                cout << array[i][j] << " ";
            }
        }
    }
}