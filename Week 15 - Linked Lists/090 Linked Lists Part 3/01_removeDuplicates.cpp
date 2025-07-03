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

Node* deleteDuplicates(Node* head) {
    if ((head == NULL) || (head->next == NULL)) {
        return head;
    }
    Node* a = head;
    Node* b = head;
    while (b != NULL) {
        while ((b != NULL) && (b->val == a->val)) {
            b = b->next;
        }
        a->next = b;
        a = b;
        if (b != NULL) {
            b = b->next;
        }
    }
    return head;
}
// LEETCODE 83(EASY)
int main(void) {
    Node* a = new Node(10);
    Node* b = new Node(10);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    a->next = b; // (*a).next = b; 
    b->next = c;
    c->next = d;
    d->next = e;
    Node* head = a;
    display(head);
    Node* newHead = deleteDuplicates(head);
    display(head);
    return 0; 
}