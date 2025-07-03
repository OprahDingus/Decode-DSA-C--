#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string s;
    cout << "Enter a String: ";
    getline(cin, s);
    int i = 0, count = 0;
    while(s[i] != '\0') {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            count++;
        }
        i++;
    }
    cout << "Total volwels: " << count;
    return 0;
}