#include <iostream>
using namespace std;
int main(void)
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Before swapping | a = " << a << " b = " << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "After swapping | a = " << a << " b = " << b << endl;
    return 0;
}