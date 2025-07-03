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
    int x;
    bool flag = false;
    cout << "Enter number you want to search: ";
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            flag = true;
            break;
        }
    }
    if (flag == true)
    {
        cout << "Element is present in Array";
    }
    else
    {
        cout << "Element is not present in Array";
    }
    return 0;
}