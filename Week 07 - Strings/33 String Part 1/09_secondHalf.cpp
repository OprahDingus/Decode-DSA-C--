#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string str;
    cout << "Enter string of even length: ";
    getline(cin, str);
    int n = str.length();
    cout << "Second half: " << str.substr(n / 2);
    return 0;
}