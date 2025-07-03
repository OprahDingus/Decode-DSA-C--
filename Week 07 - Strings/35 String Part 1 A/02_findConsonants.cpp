#include <iostream>
#include <string>
using namespace std;

bool isConsonant(char ch) {
    if(ch < 65) {
        return false;
    }
    else if((ch > 90) && (ch < 97)) {
        return false;
    } 
    else if(ch > 122) {
        return false;
    }
    else if((ch == 'A') || (ch == 'a')) {
        return false;
    }
    else if((ch == 'E') || (ch == 'e')) {
        return false;
    }
    else if((ch == 'I') || (ch == 'i')) {
        return false;
    }
    else if((ch == 'O') || (ch == 'o')) {
        return false;
    }
    else if((ch == 'U') || (ch == 'u')) {
        return false;
    }
    else {
        return true;
    }
}

int main(void) {
    string str;
    cout << "Enter string: ";
    getline(cin, str);
    int count = 0;
    for(int i = 0; i < str.length(); i++) {
        if(isConsonant(str[i])) {
            count++;
        }
    }
    cout << "Total consonants: " << count;
    return 0;
}