#include <iostream>
#include <vector>
using namespace std;

void setZeroes(vector< vector<int> >& array) {
    int m = array.size();
    int n = array[0].size();
    vector<bool> row(m, false);
    vector<bool> col(n, false);
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(array[i][j] == 0) {
                row[i] = true;
                col[j] = true;
            }
        }
    }
    for(int i = 0; i < m; i++) {
        if(row[i] == true) {
            for(int j = 0; j < n; j++) {
                array[i][j] = 0;
            }
        }
    }
    for(int j = 0; j < n; j++) {
        if(col[j] == true) {
            for(int i = 0; i < m; i++) {
                array[i][j] = 0;
            }
        }
    }
}
// LEETCODE 73
int main(void) {
    return 0;
}