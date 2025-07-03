#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int x;
    cout << "Enter a number: ";
    cin >> x;
    string s = to_string(x);
    cout << "In string: " << s;
    return 0;
}