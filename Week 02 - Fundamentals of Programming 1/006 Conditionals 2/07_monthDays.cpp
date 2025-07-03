#include <iostream>
using namespace std;
int main(void)
{
    int month;
    cout << "Enter month number: ";
    cin >> month;
    switch((month <= 7) && (month % 2 != 0))
    {
        case 1: cout << "31"; 
    }
    switch((month >= 8) && (month % 2 == 0))
    {
        case 1: cout << "31";
    }
    switch((month == 4) || (month == 6) || (month == 9) || (month == 11))
    {
        case 1: cout << "30";
    }
    switch(month)
    {
        case 2: cout << 28;
    }
    return 0;
}