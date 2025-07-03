#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s, int i, int j) {
    if(i > j) {
        return true;
    }
    if(s[i] != s[j]) {
        return false;
    }
    else {
        return isPalindrome(s, i + 1, j - 1);
    }
}

int main(void) {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    if(isPalindrome(str, 0, str.length() - 1)) {
        cout << "It is Palindrome";
    }
    else {
        cout << "It is not Palindrome";
    }
    return 0;
}