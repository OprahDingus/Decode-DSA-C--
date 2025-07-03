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

Node* getNodeAt(Node* head, int idx) {
    Node* temp = head;
    for(int i = 1; i <= idx; i++) {
        temp = temp->next;
    }
    return temp;
}
Node* reverseList(Node* head) {
    int n = 0;
    Node* temp = head;
    while(temp) {
        temp = temp->next;
        n++;
    }
    int i = 0;
    int j = n - 1;
    while(i < j) {
        Node* left = getNodeAt(head, i);
        Node* right = getNodeAt(head, j);
        int t = left->val;
        left->val = right->val;
        right->val = t;
        i++;
        j--;
    }
    return head;
}
// LEETCODE 206(EASY)
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