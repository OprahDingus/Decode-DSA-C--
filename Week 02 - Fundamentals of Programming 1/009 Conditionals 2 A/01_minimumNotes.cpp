#include <iostream>
using namespace std;

int main(void) {
    int amt;
    cout << "Enter amount: ";
    cin >> amt;
    int n1, n2, n5, n10, n20, n50, n100, n200, n500, n2000;
    n1 = n2 = n5 = n10 = n20 = n50 = n100 = n200 = n500 = n2000;
    switch(1) {
        case 1:
            n2000 = amt / 2000;
            amt -= (2000 * n2000);
        case 2:
            n500 = amt / 500;
            amt -= (500 * n500);
        case 3:
            n200 = amt / 200;
            amt -= (200 * n200);
        case 4:
            n100 = amt / 100;
            amt -= (100 * n100);
        case 5:
            n50 = amt / 50;
            amt -= (50 * n50);
        case 6:
            n20 = amt / 20;
            amt -= (20 * n20);
        case 7:
            n10 = amt / 10;
            amt -= (10 * n10);
        case 8:
            n5 = amt / 5;
            amt -= (5 * n5);
        case 9:
            n2 = amt / 2;
            amt -= (2 * n2);
        case 10:
            n1 = amt / 1;
            amt -= (1 * n1);
    }
    int total = n1 + n2 + n5 + n10 + n20 + n50 + n100 + n200 + n500 + n2000;
    cout << "Total notes required: " << total;
    return 0;
}