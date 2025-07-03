#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cout << "Enter last term: ";
    cin >> n;
    int a = 1;
    for(int i = 1; i <= n; i++)
    {
        cout << a << " ";
        a = a + 2;
    }
    return 0;
}