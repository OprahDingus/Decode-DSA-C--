#include <iostream>
using namespace std;
int main(void)
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    int nst = 1;
    int nsp = n - 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= nsp; j++)
        {
            cout << "  ";
        }
        nsp--;
        for(int j = 1; j <= nst; j++)
        {
            cout << "* ";
        }
        nst = nst + 2;
        cout << endl;
    }
    return 0;
}