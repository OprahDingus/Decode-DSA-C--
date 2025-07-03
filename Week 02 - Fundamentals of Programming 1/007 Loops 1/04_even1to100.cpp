#include <iostream>
using namespace std;

int main(void)
{
    cout << "Even numbers from 1 to 100: ";
    for(int i = 1; i <= 100; i++)
    {
        if(i % 2 == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}