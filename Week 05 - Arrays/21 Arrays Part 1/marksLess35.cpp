#include <iostream>
using namespace std;
int main(void)
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    int marks[n];
    cout << "Enter marks of students: ";
    for (int i = 0; i < n; i++)
    {
        cin >> marks[i];
    }
    cout << "Roll of less than 35: ";
    for (int i = 0; i < n; i++)
    {
        if (marks[i] < 35)
        {
            cout << i << " ";
        }
    }
    return 0;
}