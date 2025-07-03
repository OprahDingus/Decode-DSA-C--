#include <iostream>
#include <string>
using namespace std;

void removeChar(string ans, string origin, int idx) {
    if(idx == origin.length()) {
        cout << "Shortened string: " << ans;
        return;
    }
    char ch = origin[idx];
    if(ch == 'a') {
        removeChar(ans, origin, idx + 1);
    }
    else {
        removeChar(ans + ch, origin, idx + 1);
    }
}

int main(void) {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    removeChar("", str, 0);
    return 0;
}