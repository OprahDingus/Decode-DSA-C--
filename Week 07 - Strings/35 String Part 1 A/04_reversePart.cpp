#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int n = str.length();
    int i = n / 2;
    int j = n - 1;
    while(i < j) {
        swap(str[i], str[j]);
        i++;
        j--;
    }
    cout << "Modified String: " << str;
    return 0;
}