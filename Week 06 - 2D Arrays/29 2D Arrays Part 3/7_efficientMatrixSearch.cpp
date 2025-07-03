#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector< vector<int> >& matrix, int target) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    int i = 0;
    int j = cols - 1;
    while(i <= (rows - 1) && j >= 0) {
        if(matrix[i][j] == target) {
            return true;
        }
        else if(matrix[i][j] > target) {
            j--;
        }
        else {
            i++;
        }
    }
    return false;
}
// LEETCODE 74 (MEDIUM)
int main(void) {
    int m, n;
    cout << "Enter rows and columns: ";
    cin >> m >> n;
    int matrix[m][n];
    cout << "Enter Array elements: " << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    int target;
    cout << "Enter Target: ";
    cin >> target;
    int i = 0;
    int j = n - 1;
    int flag = 0;
    while(i <= (m - 1) && j >= 0) {
        if(matrix[i][j] == target) {
            flag = 1;
        }
        else if(matrix[i][j] > target) {
            j--;
        }
        else {
            i++;
        }
    }
    if(flag == 0) {
        cout << "False";
    }
    else {
        cout << "True";
    }
    return 0;
}