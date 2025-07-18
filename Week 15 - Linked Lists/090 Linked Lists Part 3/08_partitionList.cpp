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

Node* partition(Node* head, int x) {
    Node* low = new Node(100);
    Node* high = new Node(234);
    Node* tempLow = low;
    Node* tempHigh = high;
    Node* temp = head;
    while(temp != NULL) {
        if(temp->val < x) {
            tempLow->next = temp;
            temp = temp->next;
            tempLow = tempLow->next;
        }
        else {
            tempHigh->next = temp;
            temp = temp->next;
            tempHigh = tempHigh->next;
        }
    }
    tempLow->next = high->next;
    tempHigh->next = NULL;
    return low->next;
}
// LEETCODE 86(MEDIUM)
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