#include <iostream>
using namespace std;
int main(void)
{
    int a, b;
    char op;
    cout << "Enter the problem: ";
    cin >> a >> op >> b;
    switch(op)
    {
        case '+': cout << a + b; break;
        case '-': cout << a - b; break;
        case '*': cout << a * b; break;
        case '/': cout << a / b; break;
        default: cout << "Invalid";
    }
    return 0;
}