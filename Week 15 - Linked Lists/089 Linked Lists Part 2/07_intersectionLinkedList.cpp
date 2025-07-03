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

Node* getIntersectionNode(Node* headA, Node* headB) {
    Node* tempA = headA;
    Node* tempB = headB;
    int lenA = 0;
    while(tempA != NULL) {
        lenA++;
        tempA = tempA->next;
    }
    int lenB = 0;
    while(tempB != NULL){
        lenB++;
        tempB = tempB->next;
    }
    tempA = headA;
    tempB = headB;
    if(lenA > lenB) {
        int diff = lenA - lenB;
        for(int i = 1; i <= diff; i++) {
            tempA = tempA->next;
        }
        while(tempA != tempB) {
            tempA = tempA->next;
            tempB = tempB->next;
        }
        return tempA;
    }
    else {
        int diff = lenB - lenA  ;
        for(int i = 1; i <= diff; i++) {
            tempB = tempB->next;
        }
        while(tempA != tempB) {
            tempA = tempA->next;
            tempB = tempB->next;
        }
        return tempB;
    }
}
// LEETCODE 160(EASY)
int main(void) {
    
    return 0; 
}