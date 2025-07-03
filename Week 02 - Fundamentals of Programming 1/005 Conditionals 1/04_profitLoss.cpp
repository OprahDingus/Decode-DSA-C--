#include <iostream>
using namespace std;
int main(void)
{
    int cp, sp;
    cout << "Enter cost price: ";
    cin >> cp;
    cout << "Enter selling price: ";
    cin >> sp;
    if(sp > cp)
    {
        cout << "Profit";
    }
    else if(cp > sp)
    {
        cout << "Loss";
    }
    else
    {
        cout << "No gain";
    }
    return 0;
}