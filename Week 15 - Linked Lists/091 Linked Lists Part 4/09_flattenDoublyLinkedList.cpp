#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;
    Node* child;
    Node (int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
        this->child = NULL;
    }
};

void display(Node* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

Node* flatten(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        Node* a = temp->next;
        if (temp->child != NULL) {
            Node* c = temp->child;
            temp->child = NULL;
            c = flatten(c);
            temp->next = c;
            c->prev = temp;
            while (c->next != NULL) {
                c = c->next;
            }
            c->next = a;
            if (a != NULL) {
                a->prev = c;
            }
        }
        temp = a;
    }
    return head;
}
// LEETCODE 430(MEDIUM)
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