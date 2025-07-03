#include <iostream>
#include <climits>
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
    int max = INT_MIN;
    int pos = 0;
    for(int i = 0; i < m; i++) {
        int sum = 0;
        for(int j = 0; j < n; j++) {
            sum = sum + array[i][j];
        }
        if(sum > max) {
            max = sum;
            pos = i + 1;
        }
    }
    cout << "Max row is: " << pos << endl << "Value of row: " << max;
}