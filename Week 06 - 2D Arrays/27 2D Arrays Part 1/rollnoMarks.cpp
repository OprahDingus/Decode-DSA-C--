#include <iostream>
using namespace std;

int main(void) {
    int n;
    cout << "Enter total students: ";
    cin >> n;
    int array[n][2];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> array[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 2; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}