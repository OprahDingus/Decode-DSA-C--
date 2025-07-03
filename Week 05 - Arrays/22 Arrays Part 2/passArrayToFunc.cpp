#include <iostream>
using namespace std;
void display(int a[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
}

void change(int b[])
{
    b[0] = 100;
}

int main(void)
{
    int arr[5] = {1, 4, 2, 7, 4};
    display(arr);
    cout << endl;
    change(arr);
    display(arr);
    return 0;
}