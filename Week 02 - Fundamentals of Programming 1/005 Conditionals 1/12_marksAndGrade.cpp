#include <iostream>
using namespace std;
int main(void)
{
    int marks;
    cout << "Enter marks: ";
    cin >> marks;
    if(marks > 90)
    {
        cout << "Excellent";
    }
    else if(marks > 80)
    {
        cout << "Very Good";
    }
    else if(marks > 70)
    {
        cout << "Good";
    }
    else if(marks > 60)
    {
        cout << "Can do better";
    }
    else if(marks > 50)
    {
        cout << "Average";
    }
    else if(marks > 40)
    {
        cout << "Below Average";
    }
    else
    {
        cout << "Fail";
    }
    return 0;
}