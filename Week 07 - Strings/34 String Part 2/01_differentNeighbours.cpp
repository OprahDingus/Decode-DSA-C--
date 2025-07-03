#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int count = 0;
    int n = str.length();
    for(int i = 0; i < n; i++) {
        if(n == 1) {
            break;
        }
        if(n == 2 && (str[i] != str[i + 1])) {
            count++;
            break;
        }
        if(i == 0) {
            if(str[i] != str[i + 1]) {
                count++;
            }
        }
        else if(i == n - 1) {
            if(str[i] != str[i - 1]) {
                count++;
            }
        } 
        else if((str[i] != str[i + 1]) && (str[i] != str[i - 1])) {
            count++;
        }
    }
    cout << "Total Matches: " << count;
    return 0;
}