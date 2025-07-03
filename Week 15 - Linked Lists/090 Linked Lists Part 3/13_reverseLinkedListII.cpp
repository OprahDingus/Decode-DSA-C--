#include <iostream>
#include <vector>
using namespace std;

class Node {
    public:
    int val;
    Node* next;
    Node (int val) {
        this->val = val;
        this->next = NULL;
    }
};

void display(Node* head) {
    while(head != NULL) {
        cout << head->val << " ";
        head = head->next ;
    }
    cout << endl;
}

Node* reverseList(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
    Node* Next = head;
    while(curr) {
        Next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = Next;
    }
    return prev;
}

Node* reverseBetween(Node* head, int left, int right) {
    if (left == right) {
        return head;
    }
    Node* a = NULL;
    Node* b = NULL;
    Node* c = NULL;
    Node* d = NULL;
    Node* temp = head;
    int n = 1;
    while (temp) {
        if (n == left - 1) {
            a = temp;
        }
        if (n == left) {
            b = temp;
        }
        if (n == right) {
            c = temp;
        }
        if (n == right + 1) {
            d = temp;
        }
        temp = temp->next;
        n++;
    }
    if (a) {
        a->next = NULL;
    }
    c->next = NULL;
    c = reverseList(b);
    if (a) {
        a->next = c;
    }
    b->next = d;
    if (a) {
        return head;
    }
    return c;
}
// LEETCODE 92(MEDIUM)
int main(void) {
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    a->next = b; // (*a).next = b; 
    b->next = c;
    c->next = d;
    d->next = e;
    Node* head = a;
    display(head);
    
    return 0; 
}