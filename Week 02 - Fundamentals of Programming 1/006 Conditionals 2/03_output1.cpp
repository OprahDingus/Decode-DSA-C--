#include <iostream>
using namespace std;
int main(void)
{
    char x;
    int a = 2;
    x = (a > 0) ? 'a' : 'S';
    cout << "Value of x: " << x << endl;
    cout << "Value of a: " << a;
    return 0;
}