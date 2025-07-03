#include <iostream>
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

Node* removeNthFromEnd(Node* head, int n) {
    int len = 0;
    Node* temp = head;
    while (temp != NULL) {
        len++;
        temp = temp->next;
    }
    if (n == len) {
        head = head->next;
        return head;
    }
    // int m = len - n + 1;
    // int idx = m - 1;
    temp = head;
    for(int i = 1; i < len - n; i++) {
        temp = temp->next;
    }
    temp->next = temp->next->next;
    return head;
}
// LEETCODE 19(MEDIUM)
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
    Node* newHead = removeNthFromEnd(head, 2);
    display(newHead);
    return 0; 
}