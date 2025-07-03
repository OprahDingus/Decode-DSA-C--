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

Node* middleNode(Node* head) {
    int len = 0;
    Node* temp = head;
    while(temp != NULL) {
        len++;
        temp = temp->next;
    }
    int midIdx = len / 2;
    Node* mid = head;
    for (int i = 1; i <= midIdx; i++) {
        mid = mid->next;
    }
    return mid;
}
// LEETCODE 876(EASY)
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
    Node* mid = middleNode(head);
    cout << mid->val;
    return 0; 
}