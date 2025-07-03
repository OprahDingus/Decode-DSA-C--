#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isIsomorphic(string s, string t) {
    if(s.length() != t.length()) {
        return false;
    }
    vector<int> v(150, 1000);
    for(int i = 0; i < s.length(); i++) {
        int idx = (int)s[i];
        if(v[idx] == 1000) {
            v[idx] = s[i] - t[i];
        }
        else if(v[idx] != (s[i] - t[i])) {
            return false;
        }
    }
    for(int i = 0; i < 150; i++) {
        v[i] = 1000;
    }
    for(int i = 0; i < s.length(); i++) {
        int idx = (int)t[i];
        if(v[idx] == 1000) {
            v[idx] = t[i] - s[i];
        }
        else if(v[idx] != (t[i] - s[i])) {
            return false;
        }
    }
    return true;
}
// LEETCODE 205 (EASY)
int main(void) {
    string str1, str2;
    cout << "Enter first string: "; 
    getline(cin, str1);
    cout << "Enter second string: "; 
    getline(cin, str2);
    if(isIsomorphic(str1, str2)) {
        cout << "They are Isomorphic";
    }
    else {
        cout << "They are not Isomorphic";
    }
    return 0;
}