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

Node* mergeTwoLists(Node* a, Node* b) {
    Node* c = new Node(100);
    Node* temp = c;
    while((a != NULL) && (b != NULL)) {
        if(a->val <= b->val) {
            temp->next = a;
            a = a->next;
            temp = temp->next;
        }
        else {
            temp->next = b;
            b = b->next;
            temp = temp->next;
        }
    }
    if(a == NULL) {
        temp->next = b;
    }
    else {
        temp->next = a;
    }
    return c->next;
}
Node* mergeKLists(vector<Node*>& lists) {
    if(lists.size() == 0) {
        return NULL;
    }
    while(lists.size() > 1) {
        Node* a = lists[lists.size() - 1];
        lists.pop_back();
        Node* b = lists[lists.size() - 1];
        lists.pop_back();
        Node* c = mergeTwoLists(a, b);
        lists.push_back(c);
    }
    return lists[0];
}
// LEETCODE 23(HARD)
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