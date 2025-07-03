#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
    // string str = "abcd";
    // cout << str.length() << endl;
    string str = "abcd";
    // cout << str << endl;
    // str.push_back('e');
    // str.push_back('f');
    // cout << str << endl;
    // cout << str << endl;
    // str.pop_back();
    // str.pop_back();
    // cout << str << endl;
    // string strg = "efgh";
    // str = str + strg;
    // cout << str;
    cout << str << endl;
    reverse(str.begin(), str.end());
    cout << str << endl;
    return 0;
}