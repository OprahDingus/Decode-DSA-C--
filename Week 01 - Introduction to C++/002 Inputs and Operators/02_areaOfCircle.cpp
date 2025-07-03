#include <iostream>
using namespace std;

int main(void) {
    int radius;
    cout << "Enter radius: ";
    cin >> radius;
    float area = 3.1412 * radius * radius;
    cout << "Area of circle: " << area;
    return 0;
}