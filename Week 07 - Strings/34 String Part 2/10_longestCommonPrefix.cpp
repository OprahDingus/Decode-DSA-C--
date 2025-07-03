#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    int n = strs.size();
    if(n == 1) {
        return strs[0];
    }
    sort(strs.begin(), strs.end());
    string first = strs[0];
    string last = strs[n - 1];
    string s = "";
    for(int i = 0; i < (min(first.size(), last.size())); i++) {
        if(first[i] == last[i]) {
            s = s + first[i];
        }
        else {
            return s;
        }
    }
    return s;
}
// LEETCODE 14 (EASY)
int main(void) {
    vector<string> v;
    v.push_back("flower");
    v.push_back("flow");
    v.push_back("flight");
    cout << "The words are: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    string s = longestCommonPrefix(v);
    cout << "Longest Common Prefix: " << s;
}