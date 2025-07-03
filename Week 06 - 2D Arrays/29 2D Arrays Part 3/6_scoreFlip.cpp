#include <iostream>
#include <vector>
using namespace std;

int matrixScore(vector< vector<int> >& grid) {
    int r = grid.size();
    int c = grid[0].size();
    for(int i = 0; i < r; i++) {
        if(grid[i][0] == 0) {
            for(int j = 0; j < c; j++) {
                if(grid[i][j] == 0) {
                    grid[i][j] = 1;
                }
                else {
                    grid[i][j] = 0;
                }
            }
        }
    }
    for(int j = 0; j < c; j++) {
        int noz = 0;
        int noo = 0;
        for(int i = 0; i < r; i++) {
            if(grid[i][j] == 0) {
                noz++;
            }
            else {
                noo++;
            }
        }
        if(noz > noo) {
            for(int i = 0; i < r; i++) {
                if(grid[i][j] == 0) {
                    grid[i][j] = 1;
                }
                else {
                    grid[i][j] = 0;
                }
            }
        }
    }
    int sum = 0;
    for(int i = 0; i < r; i++) {
        int x = 1;
        for(int j = c - 1; j >= 0; j--) {
            sum = sum + (grid[i][j] * x);
            x = x * 2;
        }
    }
    return sum;
}
// LEETCODE 861 (MEDIUM)
int main(void) {
    int r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;
    cout << "Enter Scores: " << endl;
    vector< vector<int> > grid(r, vector<int> (c));
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> grid[i][j];
        }
    }
    int sum = matrixScore(grid);
    cout << "The score is: " << sum;
    return 0;
}