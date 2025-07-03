#include <iostream>
using namespace std;
void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main(void)
{
    int a, b;
    a = 4; b = 9;
    cout << a << " " << b << endl;
    swap(&a, &b);
    cout << a << " " << b << endl;
    return 0;
}