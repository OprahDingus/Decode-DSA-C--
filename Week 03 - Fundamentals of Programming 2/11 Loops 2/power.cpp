#include <iostream>
using namespace std;
int main(void)
{
    int a, b;
    cout << "Enter base: ";
    cin >> a;
    cout << "Enter power: ";
    cin >> b;
    float power = 1;
    bool flag = true;
    if(b < 0)
    {
        flag = false;
        b = -b;
    }
    for(int i = 1; i <= b; i++)
    {
        power = power * a;
    }
    if(flag == false)
    {
        power = 1 / power;
        b = -b;
    }
    cout << a << " raised to " << b << " is: " << power;
    return 0;
}