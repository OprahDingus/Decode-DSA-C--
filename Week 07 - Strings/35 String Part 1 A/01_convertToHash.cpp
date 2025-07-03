#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string str;
    int n;
    // cout << "Enter string length: ";
    // cin >> n;
    cout << "Enter string: ";
    // for(int i = 0; i < n; i++) {
    //     char ch;
    //     cin >> ch;
    //     str.push_back(ch);
    // }
    getline(cin, str);
    n = str.length();
    for(int i = 1; i < n; i = i + 2) {
        str[i] = '#';
    }
    cout << "Modified string: " << str;
    return 0;
}