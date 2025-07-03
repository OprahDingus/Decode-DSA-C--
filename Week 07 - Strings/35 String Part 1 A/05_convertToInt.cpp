#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string str;
    cout << "Enter string: ";
    getline(cin, str);
    int x = 0;
    int n = str.length();
    for(int i = 0; i < n; i++) {
        x = x * 10;
        x = x + (str[i] - 48);
    }
    cout << "In Number: " << x;
    return 0;
}