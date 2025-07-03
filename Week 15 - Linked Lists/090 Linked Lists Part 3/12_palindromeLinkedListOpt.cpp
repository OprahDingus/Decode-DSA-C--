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

Node* reverseList(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
    Node* Next = head;
    while(curr) {
        Next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = Next;
    }
    return prev;
}

bool isPalindrome(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while (fast->next != NULL && fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    Node* newHead = reverseList(slow->next);
    Node* a = head;
    Node* b = newHead;
    while (b) {
        if (a->val != b->val) {
            return false;
        }
        a = a->next;
        b = b->next;
    }
    return true;
}
// LEETCODE 234(EASY)
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