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

class LinkedList {
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList() {
        head = tail = NULL;
        size = 0;
    }

    void insertAtTail(int val) {
        Node* temp = new Node(val);
        if(size == 0) {
            head = tail = temp;
        }
        else {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void insertAtHead(int val) {
        Node* temp = new Node(val);
        if(size == 0) {
            head = tail = temp;
        }
        else {
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insertAtIndex(int idx, int val) {
        if((idx < 0) || (idx > size)) {
            cout << "Invalid Index" << endl;
        }
        else if(idx == 0) insertAtHead(val);
        else if(idx == size) insertAtTail(val);
        else {
            Node* t = new Node(val);
            Node* temp = head;
            for(int i = 1; i <= idx - 1; i++) {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }

    int getElementAt(int idx) {
        if((idx < 0) || (idx >= size)) {
            cout << "Invalid Index" << endl;
            return -1;
        }
        else if(idx == 0) return head->val;
        else if(idx == size - 1) return tail->val;
        else {
            Node* temp = head;
            for(int i = 1; i <= idx; i++) {
                temp = temp->next;
            }
            return temp->val;
        }
    }

    void deleteAtHead(void) {
        if(size == 0) {
            cout << "Empty List" << endl;
            return;
        }
        head = head->next;
        size--;
    } 

    void deleteAtTail(void) {
        if(size == 0) {
            cout << "Empty List" << endl;
            return;
        }
        Node* temp = head;
        while(temp->next != tail) {
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }

    void deleteAtIndex(int idx) {
        if(idx < 0 || idx >= size) {
            cout << "Invalid Index" << endl;
            return;
        }
        else if(idx == 0) deleteAtHead();
        else if(idx == size - 1) deleteAtTail();
        else {
            Node* temp = head;
            for(int i = 1; i <= idx - 1; i++) {
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }
    
    void display(void) {
        Node* temp = head;
        while(temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main(void) {
    LinkedList list;
    list.insertAtTail(10);
    list.display();
    cout << list.size << endl;
    list.insertAtTail(20);
    list.display();
    cout << list.size << endl;
    list.insertAtTail(30);
    list.insertAtTail(40);
    list.display();
    cout << list.size << endl;
    list.insertAtHead(50);
    list.display();
    cout << list.size << endl;
    list.insertAtIndex(2, 60);
    list.display();
    cout << list.size << endl;
    cout << list.getElementAt(4) << endl;
    list.deleteAtHead();
    list.display();
    cout << list.size << endl;
    list.deleteAtTail();
    list.display();
    cout << list.size << endl;
    list.deleteAtIndex(2);
    list.display();
    cout << list.size << endl;
    return 0;
}