#include <iostream>
#include <vector>
using namespace std;

void generate(vector<string>& ans, string s, int open, int close, int n) {
    if(close == n) {
        ans.push_back(s);
        return;
    }
    if(open < n) {
        generate(ans, s + '(', open + 1, close, n);
    }
    if(close < open) {
        generate(ans, s + ')', open, close + 1, n);
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> ans;
    generate(ans, "", 0, 0, n);
    return ans;
}
// LEETCODE 22 (MEDIUM)
int main(void) {
    int n;
    cout << "Enter number of parenthesis: ";
    cin >> n;
    vector<string> ans = generateParenthesis(n);
    cout << "The combinations are:" << endl;
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }
    return 0;
}