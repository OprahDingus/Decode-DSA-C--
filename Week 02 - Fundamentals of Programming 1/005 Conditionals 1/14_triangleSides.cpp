#include <iostream>
using namespace std;
int main(void)
{
    int a, b, c;
    cout << "Enter sides of the triangle: ";
    cin >> a >> b >> c;
    if((a + b > c) && (b + c > a) && (a + c > b))
    {
        cout << a << " , " << b << " , " << c << " can be sides of a trianlge";
    }
    else
    {
        cout << "These cannot be sides of a valid triangle";
    }
    return 0;
}