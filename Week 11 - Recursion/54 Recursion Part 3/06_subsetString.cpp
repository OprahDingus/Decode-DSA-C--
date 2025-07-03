#include <iostream>
#include <string>
using namespace std;

void printSubset(string ans, string origin) {
    if(origin == "") {
        cout << ans << endl;
        return;
    }
    char ch = origin[0];
    printSubset(ans, origin.substr(1));
    printSubset(ans + ch, origin.substr(1));
}

int main(void) {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    printSubset("", str);
    return 0;
}