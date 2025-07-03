#include <iostream>
// #include <climits>
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
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << "Biggest number in Array: " << max;
    return 0;
}