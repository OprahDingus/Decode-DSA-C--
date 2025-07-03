#include <iostream>
using namespace std;
int main(void)
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    int last = 0;
    int rev = 0;
    while(n > 0)
    {
        last = n % 10;
        rev = rev * 10 + last;
        n = n / 10;
    }
    cout << "Reversed number: " << rev;
    return 0;
}