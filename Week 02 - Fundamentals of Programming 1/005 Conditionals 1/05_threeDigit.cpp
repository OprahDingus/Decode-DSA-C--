#include <iostream>
using namespace std;
int main(void)
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if((n > 99) && (n < 1000))
    {
        cout << "Three digit number";
    }
    else
    {
        cout << "Not a three digit number";
    }
    return 0;
}