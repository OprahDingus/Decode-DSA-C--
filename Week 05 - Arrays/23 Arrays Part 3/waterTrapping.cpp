#include <iostream>
using namespace std;

int trapWater(int height[], int n) {
    int prev[n];
    prev[0] = -1;
    int max = height[0];
    for(int i = 1; i < n; i++) {
        prev[i] = max;
        if(max < height[i]) {
            max = height[i];
        }
    }
    int next[n];
    next[n - 1] = -1;
    max = height[n - 1];
    for(int i = n - 2; i >= 0; i--) {
        next[i] = max;
        if(max < height[i]) {
            max = height[i];
        }
    }
    int mini[n];
    for(int i = 0; i < n; i++) {
        mini[i] = min(prev[i], next[i]);
    }
    int water = 0;
    for(int i = 1; i < n - 1; i++) {
        if(height[i] < mini[i]) {
            water = water + (mini[i] - height[i]);
        }
    }
    return water;
}

int main(void) {
    int n;
    cout << "Enter Array size: ";
    cin >> n;
    int array[n];
    cout << "Enter boulder heights: ";
    for(int i = 0; i < n; i++) {
        cin >> array[i];
    }
    int water = trapWater(array, n);
    cout << "Total area of water trapped: " << water << " unit^2";
}