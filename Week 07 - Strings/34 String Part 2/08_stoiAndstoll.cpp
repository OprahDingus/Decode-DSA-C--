#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string str = "123456";
    int x = stoi(str);
    cout << x + 1 << endl;

    string st = "1234567890123456789";
    long long X = stoll(st);
    cout << X << endl;

    int a = 1234567;
    string s = to_string(a);
    cout << s << endl;
}