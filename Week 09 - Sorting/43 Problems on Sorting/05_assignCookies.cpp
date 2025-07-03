#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findContentChildren(vector<int>& g, vector<int>& s) {
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    int count = 0;
    int i = 0, j = 0;
    while((i < g.size()) && (j < s.size())) {
        if(s[j] >= g[i]) {
            count++;
            i++;
            j++;
        }
        else {
            j++;
        }
    }
    return count;
}
// LEETCODE 455 (EASY)
int main(void) {
    int m;
    cout << "Enter number of children: ";
    cin >> m;
    vector<int> greed(m);
    cout << "Enter greed factor of children: ";
    for(int i = 0; i < m; i++) {
        cin >> greed[i];
    }
    int n;
    cout << "Enter number of cookies: ";
    cin >> n;
    vector<int> size(n);
    cout << "Enter cookie sizes: ";
    for(int i = 0; i < n; i++) {
        cin >> size[i];
    }
    int count = findContentChildren(greed, size);
    cout << "Number of children satisfied: " << count;
    return 0;
}