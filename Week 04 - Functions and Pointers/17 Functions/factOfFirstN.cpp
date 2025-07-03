#include <iostream>
using namespace std;
int fact(int n)
{
    int f = 1;
    for(int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}
int main(void)
{
    int n;
    cout << "Enter last term: ";
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cout << "Fact of " << i << " is: " << fact(i) << endl;
    }
    return 0;
}