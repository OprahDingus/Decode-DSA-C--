#include <iostream>
#include <string>
using namespace std;

string helper(string str, int k, string ans) {
    int n = str.length();
    if (n == 1) {
        ans = ans + str;
        return ans;
    }
    int fact = 1;
    for (int i = 2; i <= n - 1; i++) {
        fact = fact * i;
    }
    int idx = k / fact;
    if (k % fact == 0) {
        idx--;
    }
    char ch = str[idx];
    string left = str.substr(0, idx);
    string right = str.substr(idx + 1);
    int q = 1;
    if (k % fact == 0) {
        q = fact;
    }
    else {
        q = k % fact;
    }
    return helper(left + right, q, ans + ch);
}

string getPermutation(int n, int k) {
    string str = "";
    for (int i = 1; i <= n; i++) {
        str = str + to_string(i);
    }
    return helper(str, k, "");
}
// LEETCODE 60 (HARD)
int main(void) {
    int n, k;
    cout << "Enter length of permutations: ";
    cin >> n;
    cout << "Enter position of permutation: ";
    cin >> k;
    cout << "The specific combination is: " << getPermutation(n, k);
    return 0;
}