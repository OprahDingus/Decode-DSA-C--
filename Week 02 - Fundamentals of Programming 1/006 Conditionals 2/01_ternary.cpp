#include <iostream>
using namespace std;
int main(void)
{
    int x;
    cout << "Enter a number: ";
    cin >> x;
    (x > 0) ? cout << "Positive" : cout << "Negetive";
    return 0;
}