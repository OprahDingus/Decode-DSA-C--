#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string s;
    cout << "Enter a String: ";
    getline(cin, s);
    int i = 0;
    while(s[i] != '\0') {
        if((i % 2) == 0) {
            s[i] = '0';
        }
        i++;
    }
    cout << "Updated String: " << s;
    return 0;
}