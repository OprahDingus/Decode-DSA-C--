#include <iostream>
using namespace std;
int main(void)
{
    int n;
    cout << "Enter size of Array: ";
    cin >> n;
    int arr[n];
    cout << "Enter Array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s = s + arr[i];
    }
    cout << "Sum of elements: " << s;
    return 0;
}