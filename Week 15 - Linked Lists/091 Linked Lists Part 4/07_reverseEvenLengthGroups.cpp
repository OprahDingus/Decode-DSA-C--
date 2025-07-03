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
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
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

Node* reverseBetween(Node* head, int left, int right) {
    if (left == right) {
        return head;
    }
    Node* a = NULL;
    Node* b = NULL;
    Node* c = NULL;
    Node* d = NULL;
    Node* temp = head;
    int n = 1;
    while (temp) {
        if (n == left - 1) {
            a = temp;
        }
        if (n == left) {
            b = temp;
        }
        if (n == right) {
            c = temp;
        }
        if (n == right + 1) {
            d = temp;
        }
        temp = temp->next;
        n++;
    }
    if (a) {
        a->next = NULL;
    }
    c->next = NULL;
    c = reverseList(b);
    if (a) {
        a->next = c;
    }
    b->next = d;
    if (a) {
        return head;
    }
    return c;
}

Node* reverseEvenLengthGroups(Node* head) {
    Node* temp = head;
    int gap = 1;
    while (temp && temp->next) {
        int remLen = 0;
        Node* t = temp->next;
        for  (int i = 1; i <= gap + 1 && t != NULL; i++) {
            t = t->next;
            remLen++;
        }
        if (remLen < gap + 1) {
            gap = remLen - 1;
        }
        if (gap % 2 != 0) {
            reverseBetween(temp, 2, 2 + gap);
        }
        gap++;
        for (int i = 1; temp != NULL &&  i <= gap; i++) {
            temp = temp->next;
        }
    }
    return head;
}
// LEETCODE 2074(MEDIUM)
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