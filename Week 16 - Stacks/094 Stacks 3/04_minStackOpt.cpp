#include <iostream>
#include <stack>
#include <climits>
using namespace std;

class MinStack {
public:
    stack<int> st;
    stack<int> helper;
    MinStack() {
        
    }
    void push(int val) {
        st.push(val);
        if (helper.size() == 0 || val < helper.top()) {
            helper.push(val);
        }
        else {
            helper.push(helper.top());
        }
    }    
    void pop() {
        st.pop();
        helper.pop();
    }
    int top() {
        return st.top();
    }    
    int getMin() {
        return helper.top();
    }
};
// LEETCODE 155 (MEDIUM)
int main(void) {
    return 0;
}