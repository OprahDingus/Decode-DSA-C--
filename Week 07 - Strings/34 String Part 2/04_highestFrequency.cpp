#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int max = 0;
    for(int i = 0; i < str.length(); i++) {
        char ch = str[i];
        int count = 1;
        for(int j = i + 1; j < str.length(); j++) {
            if(str[j] == str[i]) {
                count++;
            }
        }
        if(count > max) {
            max = count;
        }
    }
    cout << "Character with highest frequency: " << endl;
    for(int i = 0; i < str.length(); i++) {
        char ch = str[i];
        int count = 1;
        for(int j = i + 1; j < str.length(); j++) {
            if(str[j] == str[i]) {
                count++;
            }
        }
        if(count == max) {
            cout << ch << " " << max << endl;
        }
    }
    return 0;
}