#include <iostream>
using namespace std;
void printArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}
void sortNumberBySign(int array[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (array[i] < 0)
        {
            i++;
        }
        if (array[j] > 0)
        {
            j--;
        }
        if ((array[i] > 0) && (array[j] < 0))
        {
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j--;
        }
    }
}
int main(void)
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int array[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "Before Sorting: ";
    printArray(array, n);
    sortNumberBySign(array, n);
    cout << endl;
    cout << "After Sorting: ";
    printArray(array, n);
    return 0;
}