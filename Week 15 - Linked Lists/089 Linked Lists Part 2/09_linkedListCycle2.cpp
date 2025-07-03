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

Node* detectCycle(Node* head) {
    Node* slow = head;
    Node* fast = head;
    bool flag = false;
    while ((fast != NULL) && (fast->next != NULL)) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            flag = true;
            break;
        }
    }
    if (flag == false) {
        return NULL;
    }
    else {
        Node* temp = head;
        while (temp != slow) {
            slow = slow->next;
            temp = temp->next;
        }
        return slow;
    }
}
// LEETCODE 142(MEDIUM)
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