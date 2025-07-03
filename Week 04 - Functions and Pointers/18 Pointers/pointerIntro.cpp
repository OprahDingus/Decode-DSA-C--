#include <iostream>
using namespace std;
int main(void)
{
    int x = 4;
    int* p = &x;
    cout << &x << endl;
    cout << p << endl;

    cout << endl << *p << endl;
    return 0;
}