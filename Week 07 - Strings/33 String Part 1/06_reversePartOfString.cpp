#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
    string str;
    cout << "Enter String: ";
    getline(cin, str);
    int n = str.length();
    reverse(str.begin(), str.begin() + n / 2);
    cout << "Modified String: " << str;
    return 0;
}