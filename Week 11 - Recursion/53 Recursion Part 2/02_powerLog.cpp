#include <iostream>
using namespace std;

int power(int x, int n) {
    if(n == 1) {
        return x;
    }
    int ans = power(x, n / 2);
    if(n % 2 == 0) {
        return ans * ans;
    }
    else {
        return ans * ans * n;
    }
}

int main(void) {
    int x, n;
    cout << "Enter base and index: ";
    cin >> x >> n;
    cout << x << " raised to " << n << " is: " << power(x, n);
    return 0;
}