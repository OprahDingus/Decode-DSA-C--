#include <iostream>
#include <string>
using namespace std;

string countAndSay(int n) {
    if(n == 1) {
        return "1";
    }
    string str = countAndSay(n - 1);
    string s = "";
    int f = 1;
    char ch = str[0];
    for(int i = 1; i < str.length(); i++) {
        char dh = str[i];
        if(ch == dh) {
            f++;
        }
        else {
            s = s + (to_string(f) + ch);
            f = 1;
            ch = dh;
        }
    }
    s = s + (to_string(f) + ch);
    return s;
}
// LEETCODE 38 (MEDIUM)
int main(void) {
    int n;
    cout << "Enter value: ";
    cin >> n;
    cout << "Changed string is: " << countAndSay(n);
    return 0;
}