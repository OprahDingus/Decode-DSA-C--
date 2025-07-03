#include <iostream>
#include <string>
using namespace std;

void printSubset(string ans, string origin, bool flag) {
    if(origin == "") {
        cout << ans << endl;
        return;
    }
    char ch = origin[0];
    if(origin.length() == 1) {
        if(flag == true) {
            printSubset(ans + ch, origin.substr(1), true);
        }
        printSubset(ans, origin.substr(1), true);
        return;
    }
    char dh = origin[1];
    if(ch == dh) {
        if(flag == true) {
            printSubset(ans + ch, origin.substr(1), true);
        }
        printSubset(ans, origin.substr(1), false);
    }
    else {
        if(flag == true) {
            printSubset(ans + ch, origin.substr(1), true);
        }
        printSubset(ans, origin.substr(1), true);
    }
}

int main(void) {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    printSubset("", str, true);
    return 0;
}