#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string str = "abcdef";
    cout << str.substr(1) << endl;
    cout << str.substr(1, 3) << endl;
    cout << str.substr(2, 2) << endl;
    cout << str.substr(6) << endl;
    return 0;
}