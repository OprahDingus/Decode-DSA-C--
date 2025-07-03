#include <iostream>
using namespace std;

int main(void) {
    int array[5][5];
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            array[i][j] = 10;
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}