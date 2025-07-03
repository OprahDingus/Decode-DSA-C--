#include <iostream>
using namespace std;
int main(void)
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    int n = (int) ch;
    if((n >= 65 && n <= 90) || (n >= 97 && n <= 122))
    {
        cout << ch << " is an Alphabet";
    }
    else
    {
        cout << ch << " is not an Alphabet";
    }
    return 0;
}