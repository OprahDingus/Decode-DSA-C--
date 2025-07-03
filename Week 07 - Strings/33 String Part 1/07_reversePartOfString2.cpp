#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
    string str;
    cout << "Enter String of length more than 5: ";
    getline(cin, str);
    int n = str.length();
    if(n >= 5) {
        reverse(str.begin() + 1, str.begin() + 5);
        cout << "Modified String: " << str; 
    }
    else {
        cout << "String length is less than 5";
    }
    return 0;
}