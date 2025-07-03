#include <iostream>
using namespace std;
int main(void)
{
    int a = 15;
    int *ptr = &a;
    int b = (*ptr)++;
    cout << a << " " << b;
}