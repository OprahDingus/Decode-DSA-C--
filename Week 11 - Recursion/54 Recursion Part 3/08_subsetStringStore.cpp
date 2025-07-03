#include <iostream>
#include <string>
#include <vector>
using namespace std;

void storeSubset(string ans, string origin, vector<string>& v) {
    if(origin == "") {
        v.push_back(ans);
        return;
    }
    char ch = origin[0];
    storeSubset(ans, origin.substr(1), v);
    storeSubset(ans + ch, origin.substr(1), v);
}

int main(void) {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    vector<string> v;
    storeSubset("", str, v);
    for(string ele : v) {
        cout << ele << " ";
    }
    return 0;
}