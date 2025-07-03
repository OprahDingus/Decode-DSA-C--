#include <iostream>
using namespace std;
int main(void)
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(n % 2 == 0)
    {
        cout << n << " is an even number";
    }
    else
    {
        cout << n << " is a odd number";
    }
    return 0;
}