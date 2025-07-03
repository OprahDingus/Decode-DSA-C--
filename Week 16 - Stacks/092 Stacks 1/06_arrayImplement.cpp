#include <iostream>
using namespace std;

class Stack {
public:
    int arr[5];
    int idx;
    Stack() {
        idx = -1;
    }
    void push(int val) {
        if (idx == 4) {
            cout << "Stack is Full";
            return;
        }
        idx++;
        arr[idx] = val;
    }
    void pop() {
        if (idx == -1) {
            cout << "Stack is Empty";
            return;
        }
        idx--;
    }
    int top() {
        if (idx == -1) {
            cout << "Stack is Empty";
            return -1;
        }
        return arr[idx];
    }
    int size() {
        return idx + 1;
    }
};

int main() {
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout << st.size();
    st.pop();
    cout << st.size();
    cout << st.top();
    st.push(50);
    st.push(60);
}