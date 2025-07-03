#include <iostream>
using namespace std;
int main(void)
{
    int marks;
    cout << "Enter marks: ";
    cin >> marks;
    (marks >= 33) ? cout << "pass" : cout << "fail";
    return 0;
}