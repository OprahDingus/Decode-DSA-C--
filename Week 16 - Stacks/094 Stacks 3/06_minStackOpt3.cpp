#include <iostream>
#include <stack>
#include <climits>
using namespace std;

class MinStack {
public:
    stack<long long> st;
    long long min;
    MinStack() {
        min = LLONG_MAX;
    }
    void push(int val) {
        long long x = (long long) val;
        if (st.size() == 0) {
            st.push(x);
            min = x;
        }
        else if (x >= min) {
            st.push(x);
        }
        else {
            st.push(2 * x - min);
            min = x;
        }
    }    
    void pop() {
        if (st.top() < min) {
            long long oldMin = 2 * min - st.top();
            min = oldMin;
        }
        st.pop();
    }
    int top() {
        if (st.top() < min) {
            return (int) min;
        }
        else {
            return (int) st.top();
        }
    }    
    int getMin() {
        return (int) min;
    }
};
// LEETCODE 155 (MEDIUM)
int main(void) {
    return 0;
}