#include <iostream>
using namespace std;
int main(void)
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    int count = 0;
    int a = n;
    while(n > 0)
    {
        n = n / 10;
        count++;
    }
    if(a == 0)
    {
        cout << "Number of digits: " << 1;    
    }
    else
    {
        cout << "Number of digits: " << count;
    }
    return 0;
}