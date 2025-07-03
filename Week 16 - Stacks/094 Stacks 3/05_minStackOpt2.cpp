#include <iostream>
#include <stack>
#include <climits>
#include <vector>
using namespace std;

class MinStack {
public:
    vector<int> v;
    MinStack() {
        
    }
    void push(int val) {
        v.push_back(val);
    }    
    void pop() {
        v.pop_back();
    }
    int top() {
        return v[v.size() - 1];
    }    
    int getMin() {
        int mn = v[0];
        for (int i = 1; i < v.size(); i++) {
            mn = min(mn, v[i]);
        }
        return mn;
    }
};
// LEETCODE 155 (MEDIUM)
int main(void) {
    return 0;
}