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

vector<Node*> splitListToParts(Node* head, int k) {
    int n = 0;
    Node* temp = head;
    while (temp) {
        temp = temp->next;
        n++;
    }
    vector<Node*> ans;
    int size = n / k;
    int rem = n % k;
    temp = head;
    while (temp != NULL) {
        Node* c = new Node(100);
        Node* tempC = c;
        int s = size;
        if (rem > 0) {
            s++;
        }
        rem--;
        for (int i = 1; i <= s; i++) {
            tempC->next = temp;
            temp = temp->next;
            tempC = tempC->next;
        }
        tempC->next = NULL;
        ans.push_back(c->next);
    }
    if (ans.size() < k) {
        int extra = k - ans.size();
        for (int i = 1; i <= extra; i++) {
            ans.push_back(NULL);
        }
    }
    return ans;
}
// LEETCODE 725(MEDIUM)
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