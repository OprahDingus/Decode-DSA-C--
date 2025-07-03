#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;
    Node (int val) {
        this->val = val;
        this->next = NULL;
        this->random = NULL;
    }
};

void display(Node* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

Node* copyRandomList(Node* head) {
    Node* dummy = new Node(0);
    Node* tempC = dummy;
    Node* temp = head;
    while (temp) {
        Node* a = new Node(temp->val);
        tempC->next = a;
        tempC = tempC->next;
        temp = temp->next;
    }
    Node* duplicate = dummy->next;
    Node* a = head;
    Node* b = duplicate;
    dummy = new Node(-1);
    Node* tempD = dummy;
    while (a) {
        tempD->next = a;
        a = a->next;
        tempD = tempD->next;
        tempD->next = b;
        b = b->next;
        tempD = tempD->next;
    }
    dummy = dummy->next;
    Node* t1 = dummy;
    while (t1) {
        Node* t2 = t1->next;
        if (t1->random) {
            t2->random = t1->random->next;
        }
        t1 = t1->next->next;
    }
    Node* d1 = new Node(-1);
    Node* d2 = new Node(-1);
    t1 = d1;
    Node* t2 = d2;
    Node* t = dummy;
    while (t) {
        t1->next = t;
        t = t->next;
        t1 = t1->next;
        t2->next = t;
        t = t->next;
        t2 = t2->next;
    }
    t1->next = NULL;
    t2->next = NULL;
    d1 = d1->next;
    d2 = d2->next;
    return d2;
}
// LEETCODE 138(MEDIUM)
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