#include <iostream>
using namespace std;
int main(void)
{
    int a, b;
    cout << "Enter rows and columns: ";
    cin >> a >> b;
    for(int i = 1; i <= a; i++)
    {
        for(int j = 1; j <= b; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }   
    return 0;
}