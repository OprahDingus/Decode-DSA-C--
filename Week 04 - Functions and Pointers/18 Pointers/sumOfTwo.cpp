#include <iostream>
using namespace std;
int main(void)
{
    int x, y;
    int* p1 = &x;
    int* p2 = &y;
    cout << "Enter two number: ";
    cin >> *p1 >> *p2;
    cout << "Sum: " << *p1 + *p2 << endl;
    return 0;
}