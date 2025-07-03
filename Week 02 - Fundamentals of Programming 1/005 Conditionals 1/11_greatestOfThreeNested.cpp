#include <iostream>
using namespace std;
int main(void)
{
    int a, b, c;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter third number: ";
    cin >> c;
    if(a > b)
    {
        if(a > c)
        {
            cout << a << " is largest";
        }
        else
        {
            cout << c << " is largest";
        }
    }
    else
    {
        if(b > c)
        {
            cout << b << " is largest";
        }
        else
        {
            cout << c << " is largest";
        }
    }
    return 0;
}