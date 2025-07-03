#include <iostream>
using namespace std;
int main(void)
{
    int num1 = 5, num2 = 4, num3 = 3;
    if(num1 > num2 && num1 > num3) cout << "Number 1" << endl;
    if(num2 > num1 || num2 > num3) cout << "Number 2" << endl;
    if(num3 > num1 && num3 > num2) cout << "Number 3" << endl;
    return 0;
}