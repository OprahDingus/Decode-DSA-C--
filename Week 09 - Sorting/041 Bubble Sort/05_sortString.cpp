#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    string str = "";
    for(int i = 0; i < s.length(); i++) {
        if(s[i] > 'X') {
            str.push_back(s[i]);
        }
    }
    cout << "Before sorting: " << str;
    for(int i = 0; i < str.length() - 1; i++) {
        for(int j = 0; j < str.length() - 1 - i; j++) {
            if(str[j] < str[j + 1]) {
                swap(str[j], str[j + 1]);
            }
        }
    }
    cout << endl << "After sorting: " << str;
    return 0;
}