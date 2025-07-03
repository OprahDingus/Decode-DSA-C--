#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    sort(str.begin(), str.end());
    cout << "Sorted order: " << str;
    return 0;
}