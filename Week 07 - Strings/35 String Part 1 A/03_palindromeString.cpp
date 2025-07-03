#include <iostream>
#include <string>
using namespace std;

bool isPalindromeString(string str) {
    int i = 0;
    int j = str.length() - 1;
    while(i < j) {
        if(str[i] != str[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main(void) {
    string str;
    cout << "Enter string: ";
    getline(cin, str);
    if(isPalindromeString(str)) {
        cout << "It is Palindrome";
    }
    else {
        cout << "It is not Palindrome";
    }
    return 0;
}