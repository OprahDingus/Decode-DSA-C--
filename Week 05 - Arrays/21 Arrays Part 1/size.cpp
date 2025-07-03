#include <iostream>
using namespace std;
int main(void)
{
    int arr[] = {1, 5, 3, 7, 3, 8, 9, 4, 5, 2, 5, 6, 7, 4, 2, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << n;
    return 0;
}