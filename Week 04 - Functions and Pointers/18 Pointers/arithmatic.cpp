#include <iostream>
using namespace std;
int main(void)
{
    int x = 4;
    int* p = &x;
    // cout << p << endl;
    // p = p + 1;
    // cout << p << endl;
    cout << *p << endl;
    (*p)++;
    cout << *p << endl;
}