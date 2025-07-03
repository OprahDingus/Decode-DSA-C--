#include <iostream>
using namespace std;
int main(void)
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int product = 1;
    for(int i = 1; i <= n; i++)
    {
        product = product * i;
    }
    cout << "Factorial of " << n << " is: " << product;
    return 0;
}