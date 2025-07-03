#include <iostream>
using namespace std;
int main(void)
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    bool flag = true;
    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            flag = false;
            break;
        }
    }
    if(n == 1)
    {
        cout << n << " is an Universal Number";
    }
    else if(flag == true)
    {
        cout << n << " is a Prime Number";
    }
    else
    {
        cout << n << " is a Composite Number";
    }
    return 0;
}