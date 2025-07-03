#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;
    if(str1.size() != str2.size()) {
        cout << "They are not Anagrams";
    }
    else {
        int array[26] = {0};
        int n = str1.size();
        for(int i = 0; i < n; i++) {
            array[str1[i] - 'a']++;
            array[str2[i] - 'a']--;
        }
        int flag = 0;
        for(int i = 0; i < 26; i++) {
            if(array[i] != 0) {
                flag = 1;
                break;
            }
        }
        if(flag == 0) {
            cout << "They are Anagrams";
        }
        else {
            cout << "They are not Anagrams";
        }
    }
    return 0;
}