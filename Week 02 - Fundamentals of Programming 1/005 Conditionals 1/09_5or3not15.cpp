#include <iostream>
using namespace std;
int main(void)
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(((n % 3 == 0) || (n % 5 == 0)) && (n % 15 != 0))
    {
        cout << n << " is that number";
    }
    else
    {
        cout << n << " is not that number";
    }
    return 0;
}