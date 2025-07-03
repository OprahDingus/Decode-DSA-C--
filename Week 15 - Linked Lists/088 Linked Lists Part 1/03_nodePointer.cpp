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

int sise(Node* head) {
    Node* temp = head;
    int n = 0;
    while(temp != NULL) {
        n++;
        temp = temp->next;
    }
    return n;
}

void display(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void displayRecursion(Node* head) {
    if(head == NULL) {
        return;
    }
    cout << head->val << " ";
    displayRecursion(head->next);
}

void displayRecursionReverse(Node* head) {
    if(head == NULL) {
        return;
    }
    displayRecursionReverse(head->next);
    cout << head->val << " ";
}

void insertAtEnd(Node* head, int val) {
    Node* temp = new Node(val);
    while(head->next != NULL) {
        head = head->next;
    }
    head->next = temp;
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
    display(a);
    insertAtEnd(a, 60);
    display(a);
    // cout << (((a->next)->next)->next)->val << endl;
    // Node* temp = a;
    // while(temp != NULL) {
    //     cout << temp->val << " "; // (*temp).val
    //     temp = temp->next; // (*temp).next
    // }
    // cout << endl;
    // // display(a);
    // displayRecursion(a);
    // cout << endl;
    // displayRecursionReverse(a);
    // cout << endl;
    // int size = sise(a);
    // cout << "Size of list: " << size;
    return 0;
}