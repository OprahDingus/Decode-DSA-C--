#include <iostream>
using namespace std;
int fact(int x)
{
    int f = 1;
    for(int i = 2; i <= x; i++)
    {
        f = f * i;
    }
    return f;
}
int main(void)
{
    int n, r;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter r: ";
    cin >> r;
    int nfact = fact(n);
    int rfact = fact(r);
    int nrfact = fact(n - r);
    int ncr = nfact / (rfact * nrfact);
    cout << "nCr = " << ncr;
    return 0;
}