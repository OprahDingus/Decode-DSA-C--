#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void) {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    vector<int> array(26, 0);
    for(int i = 0; i < str.length(); i++) {
        char ch = str[i];
        int ascii = (int)ch;
        array[ascii - 97]++;
    }
    int max = 0;
    for(int i = 0; i < 26; i++) {
        if(array[i] > max) {
            max = array[i];
        }
    }
    cout << "Character with highest frequency: " << endl;
    for(int i = 0; i < 26; i++) {
        if(array[i] == max) {
            cout << (char)(i + 97) << " " << max << endl;
        }
    }
    return 0;
}