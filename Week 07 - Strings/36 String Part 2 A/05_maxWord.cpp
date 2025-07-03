#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);
    string word = "";
    string maxWord = "";
    int n = str.size();
    for(int i = 0; i < n; i++) {
        if(str[i] == ' ') {
            maxWord = max(maxWord, word);
            word = "";
        }
        else {
            word += str[i];
        }
    }
    maxWord = max(maxWord, word);
    cout << "Max word: " << maxWord;
}