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

// void deleteNode(Node* head, Node* target) {
//     Node* temp = head;
//     while(temp->next != target) {
//         temp = temp->next;
//     }
//     temp->next = temp->next->next;
// }

// Node* deleteNode(Node* head, Node* target) {
//     if(head == target) {
//         head = head->next;
//         return head;
//     }
//     Node* temp = head;
//     while(temp->next != target) {
//         temp = temp->next;
//     }
//     temp->next = temp->next->next;
//     return head; 
// }

Node* deleteNode(Node* head, int value) {
    if(head->val == value) {
        head = head->next;
        return head;
    }
    Node* temp = head;
    while(temp->next->val != value) {
        temp = temp->next;
    }
    temp->next = temp->next->next;
    return head; 
}

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
    head = deleteNode(head, 40);
    display(head);
    return 0; 
}