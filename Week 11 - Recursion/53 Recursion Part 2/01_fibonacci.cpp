#include <iostream>
using namespace std;

int fibo(int n) {
    if(n == 1 || n == 2) {
        return n;
    }
    return fibo(n - 1) + fibo(n - 2);
}

int main(void) {
    int n;
    cout << "Enter a term: ";
    cin >> n;
    cout << "The " << n << "th term is: " << n;
    return 0;
}