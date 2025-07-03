#include <iostream>
using namespace std;
void fun(int x, int y)
{
    cout << "Fun address: " << &x << endl;
    cout << "Fun address: " << &y << endl;
}
int main(void)
{
    int x = 3;
    int y = 7;
    cout << "Main address: " << &x << endl;
    cout << "Main address: " << &y << endl;
    fun(x, y);
    return 0;
}