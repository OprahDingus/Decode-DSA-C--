#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    char max1 = '!', max2 = '!';
    for(int i = 0; i < str.size(); i++) {
        if(max1 < str[i]) {
            max2 = max1;
            max1 = str[i];
        }
        else if(max2 < str[i] && max1 != str[i]) {
            max2 = str[i];
        }
    }
    if(max2 == '!') {
        cout << "No second largest";
    }
    else {
        cout << "Second largest is: " << max2;
    }
    return 0;
}