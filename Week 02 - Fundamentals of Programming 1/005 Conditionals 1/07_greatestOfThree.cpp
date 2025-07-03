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
    if(a > b && a > c)
    {
        cout << a << " is largest";
    }
    if(b > a && b > c)
    {
        cout << b << " is largest";
    }
    if(c > a && c > b)
    {
        cout << c << " is largest";
    }
    return 0;
}