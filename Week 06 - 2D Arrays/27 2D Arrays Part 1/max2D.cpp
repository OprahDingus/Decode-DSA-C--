#include <iostream>
#include <climits>
using namespace std;

int main(void) {
    int m, n;
    cout << "Enter rows: ";
    cin >> m;
    cout << "Enter columns: ";
    cin >> n;
    int array[m][n];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> array[i][j];
        }
    }
    int max = INT_MIN;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(array[i][j] > max) {
                max = array[i][j];
            }
        }
    }
    cout << "Maximum element in Array: " << max;
}