#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(void) {
    string str;
    getline(cin, str);
    stringstream ss(str);
    string temp;

    while(ss >> temp) {
        cout << temp << endl;
    }
    return 0;
}