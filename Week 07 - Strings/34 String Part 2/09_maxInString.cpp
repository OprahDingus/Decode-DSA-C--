#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string arr[] = {"0123", "0023", "456", "00182", "940", "2901"};
    int max = stoi(arr[0]);
    int pos = 0;
    for(int i = 0; i <= 5; i++) {
        int x = stoi(arr[i]);
        if(x > max) {
            max = x;
            pos = i;
        }
    }
    cout << "Max value: " << arr[pos];
}