#include <iostream>
#include <string>
using namespace std;

void permutations(string ans, string origin) {
    if(origin == "") {
        cout << ans << endl;
        return;
    }
    for(int i = 0; i < origin.length(); i++) {
        char ch = origin[i];
        string left = origin.substr(0, i);
        string right = origin.substr(i + 1);
        permutations(ans + ch, left + right);
    }
}

int main(void) {
    string str;
    cout << "Enter string: ";
    getline(cin, str);
    permutations("", str);
    return 0;
}