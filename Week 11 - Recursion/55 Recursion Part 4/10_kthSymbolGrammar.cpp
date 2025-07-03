#include <iostream>
using namespace std;

int kthGrammar(int n, int k) {
    if(n == 1) {
        return 0;
    }
    if(k % 2 == 0) {
        int prevAns = kthGrammar(n - 1, k / 2);
        if(prevAns == 0) {
            return 1;
        }
        else {
            return 0;
        }
    }
    else {
        int prevAns = kthGrammar(n - 1, k / 2 + 1);
        return prevAns;
    }
}
// LEETCODE 779 (MEDIUM)
int main(void) {
    int n, k;
    cout << "Enter rows of grammar: ";
    cin >> n;
    cout << "Enter search position: ";
    cin >> k;
    cout << "The symbol is: " << kthGrammar(n, k);
    return 0;
}