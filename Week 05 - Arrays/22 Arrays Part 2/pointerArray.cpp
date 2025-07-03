#include <iostream>
using namespace std;
int main(void)
{
    int arr[] = {4, 2, 6, 1, 7};
    int *ptr = arr;
    // cout << ptr << endl;
    // // cout << &arr[0] << endl;
    // cout << ptr[0];

    for (int i = 0; i < 5; i++)
    {
        cout << *ptr << " "; // ptr[i]  i[ptr]
        ptr++;
    }
    return 0;
}