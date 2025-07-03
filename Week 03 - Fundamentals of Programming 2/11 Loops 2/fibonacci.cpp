#include <iostream>
using namespace std;
int main(void)
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int a = 1, b = 1;
    int sum = 0;
    for(int i = 1; i <= n - 2; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
    }
    cout << "The " << n  << "th term of series: " << sum;
    return 0;
}