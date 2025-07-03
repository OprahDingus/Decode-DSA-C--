#include <iostream>
using namespace std;

int main(void) {
    int arr1[4][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
    int arr2[4][2] = {1, 2, 3, 4, 5, 6, 7, 8};
    int arr3[2][3] = {1, 2, 3, 4, 5, 6};
    int arr4[][3] = {1, 2, 3, 4, 5, 6};
    // output
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 2; j++) {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}