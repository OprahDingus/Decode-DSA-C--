#include <iostream>
#include <vector>
#include <climits>
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

vector<int> nodesBetweenCriticalPoints(Node* head) {
    int idx = 1;
    int fidx = -1;
    int sidx = -1;
    Node* a = head;
    Node* b = head->next;
    Node* c = head->next->next;
    if (c == NULL) {
        return {-1, -1};
    }
    while (c) {
        if (b->val > a->val && b->val > c->val || b->val < a->val && b->val < c->val) {
            if (fidx == -1) {
                fidx = idx;
            }        
            else {
                sidx = idx;
            }
        }
        a = a->next;
        b = b->next;
        c = c->next;
        idx++;
    }
    if (sidx == -1) {
        return {-1, -1};
    }
    int maxd = sidx - fidx;
    int mind = INT_MAX;
    fidx = -1;
    sidx = -1;
    a = head;
    b = head->next;
    c = head->next->next;
    while (c) {
        if (b->val > a->val && b->val > c->val || b->val < a->val && b->val < c->val) {
            fidx = sidx;
            sidx = idx;
            if (fidx != -1) {
                int d = sidx - fidx;
                mind = min(mind, d);
            }
        }
        a = a->next;
        b = b->next;
        c = c->next;
        idx++;
    }
    return {mind, maxd};
}
// LEETCODE 2058(MEDIUM)
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