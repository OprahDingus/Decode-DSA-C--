#include <iostream>
using namespace std;
void find(int n, int* ptr1, int* ptr2)
{
    *ptr2 = n % 10; //last digit
    while(n > 9)
    {
        n = n / 10;
    }
    *ptr1 = n;
    return;
}
int main(void)
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int firstDigit, lastDigit;
    int* ptr1 = &firstDigit;
    int* ptr2 = &lastDigit;
    find(n, ptr1, ptr2);
    cout << "Number: " << n << " , First: " << *ptr1 << " , Last: " << *ptr2;
    return 0;
}