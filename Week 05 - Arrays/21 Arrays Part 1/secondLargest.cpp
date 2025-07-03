#include <iostream>
#include <climits>
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
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    int smax = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if ((smax < arr[i]) && (arr[i] != max))
        {
            smax = arr[i];
        }
    }
    cout << "Second largest element in Array: " << smax;
    return 0;
}