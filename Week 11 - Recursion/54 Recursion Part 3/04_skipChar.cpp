#include <iostream>
#include <string>
using namespace std;

void removeChar(string ans, string origin) {
    if(origin.length() == 0) {
        cout << "Shortened string: " << ans;
        return;
    }
    char ch = origin[0];
    if(ch == 'a') {
        removeChar(ans, origin.substr(1));
    }
    else {
        removeChar(ans + ch, origin.substr(1));
    }
}

int main(void) {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    removeChar("", str);
    return 0;
}