#include <iostream>
using namespace std;
int main(void)
{
    int n;
    cout << "Enter Array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter Array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x, c = 0;
    cout << "Enter number: ";
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > x)
        {
            c++;
        }
    }
    cout << "Number of elements greater than " << x << " are: " << c;
    return 0;
}