#include <iostream>
#include <string>
using namespace std;

void printSubset(string ans, string origin, int idx) {
    if(idx == origin.length()) {
        cout << ans << endl;
        return;
    }
    char ch = origin[idx];
    printSubset(ans, origin, idx + 1);
    printSubset(ans + ch, origin, idx + 1);
}

int main(void) {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    printSubset("", str, 0);
    return 0;
}