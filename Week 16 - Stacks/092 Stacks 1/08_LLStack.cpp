#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val; 
        this->next = NULL;
    }
};

class Stack {
public:
    Node* head;
    int size;
    Stack() {
        head = NULL;
        size = 0;
    }
    void push(int val) {
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
        size++;   
    }
    void pop() {
        if (head == NULL) {
            cout << "Stack is Empty";
            return;
        }
        head = head->next;
        size--;
    }
    int top() {
        if (head == NULL) {
            cout << "Stack is Empty";
            return -1;
        }
        return head->val;
    }
    void print(Node* temp) {
        if (temp == NULL) {
            return;
        } 
        print(temp->next);
        cout << temp->val << " ";
    }
    void display() {
        Node* temp = head;
        print(temp);
        cout << endl;
    }
};

int main(void) {
    Stack st;
    cout << st.top() << endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout << st.size << endl;
    cout << st.top() << endl;
    st.display();
}