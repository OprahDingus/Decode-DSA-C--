#include <iostream>
using namespace std;
int main(void)
{
    char ch;
    cout << "Enter Character: ";
    cin >> ch;
    if((ch >= 65) && (ch <= 90) || (ch >= 97) && (ch <= 122))
    {
        if((ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U') || (ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'))
        {
            cout << ch << " is a vowel";
        }
        else
        {
            cout << ch << " is a consonant";
        }
    }
    else
    {
        cout << ch << " is not an alphabet";
    }
    return 0;
}