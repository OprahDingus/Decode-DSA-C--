#include <iostream>
using namespace std;
int main(void)
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    int last = 0;
    int sum = 0;
    while(n > 0)
    {
        last = n % 10;
        sum = sum + last;
        n = n / 10;
    }
    cout << "Sum of digits: " << sum;
    return 0;
}