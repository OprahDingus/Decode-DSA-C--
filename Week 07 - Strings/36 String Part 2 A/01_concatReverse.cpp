#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    string temp = str;
    reverse(temp.begin(), temp.end());
    str += temp;
    cout << "Modified String: " << str;
    return 0;
}