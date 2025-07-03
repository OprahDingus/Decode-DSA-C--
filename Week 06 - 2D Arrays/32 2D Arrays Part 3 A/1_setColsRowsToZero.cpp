#include <iostream>
#include <vector>
using namespace std;

void setZeroes(vector< vector<int> >& array) {
    int m = array.size();
    int n = array[0].size();
    int copy[m][n];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            copy[i][j] = array[i][j];
        }
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(copy[i][j] == 0) {
                for(int c = 0; c < n; c++) {
                    array[i][c] = 0;
                }
                for(int r = 0; r < m; r++) {
                    array[r][j] = 0;
                }
            }
        }
    }
}
// LEETCODE 73 (MEDIUM)
int main(void) {
    return 0;
}