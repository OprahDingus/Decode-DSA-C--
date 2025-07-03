#include <iostream>
using namespace std;

int main(void) {
    int a = 100;
    for(int i = 1; a > 0; i++)
    {
        cout << a << " ";
        a = a - 3;
    }
    return 0;
}