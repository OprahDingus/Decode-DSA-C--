#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    vector<int> v2;
    v2.push_back(1);
    v2.push_back(2);
    vector<int> v3;
    v3.push_back(1);
    v3.push_back(2);
    v3.push_back(3);
    v3.push_back(4);
    v3.push_back(5);
    vector<vector<int> > v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    // vector er vector initialize of name v (koto gulo vector thakbe, koto size er vector thakbe, ki element e fillup hobe)
    vector< vector<int> > V(3, vector<int> (4, 2));

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout << V[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << V.size() << endl;
    cout << V[0].size() << endl;
}