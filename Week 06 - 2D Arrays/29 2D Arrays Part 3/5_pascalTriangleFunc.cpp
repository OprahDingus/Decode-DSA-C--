#include <iostream>
#include <vector>
using namespace std;

vector< vector<int> > pascalTriangle(int rows) {
    vector< vector<int> > v;
    for(int i = 1; i <= rows; i++) {
        vector<int> a(i);
        v.push_back(a);
    }
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j <= i; j++) {
            if((j == 0) || (j == i)) {
                v[i][j] = 1;
            }
            else {
                v[i][j] = v[i - 1][j] + v[i - 1][j - 1];
            }
        }
    }
    return v;
}

int main(void) {
    int m;
    cout << "Enter number of rows: ";
    cin >> m;
    vector< vector<int> > v = pascalTriangle(m);
    for(int i = 0; i < v.size(); i++) {
        for(int j = 0; j <= i; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    } 
    return 0;
}