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

vector<vector<int>> spiralMatrix(int m, int n, Node* head) {   
    vector<vector<int>> arr(m, vector<int>(n, -1));
    int minr = 0;
    int maxr = m - 1;
    int minc = 0;
    int maxc = n - 1;
    int count = 1;
    Node* temp = head;
    while((minr <= maxr) && (minc <= maxc)) {
        for(int j = minc; j <= maxc; j++) {
            if (temp == NULL) {
                return arr;
            }
            arr[minr][j] = temp->val;
            temp = temp->next;
        }
        minr++;
        if (minr > maxr || minc > maxc) {
            break;
        }
        for (int i = minr; i <= maxr; i++) {
            if (temp == NULL) {
                return arr;
            }
            arr[i][maxc] = temp->val;
            temp = temp->next;
        }
        maxc--;
        if (minr > maxr || minc > maxc) {
            break;
        }
        for (int j = maxc; j >= minc; j--) {
            if (temp == NULL) {
                return arr;
            }
            arr[maxr][j] = temp->val;
            temp = temp->next;
        }
        maxr--;
        if (minr > maxr || minc > maxc) {
            break;
        }
        for(int i = maxr; i >= minr; i--) {
            if (temp == NULL) {
                return arr;
            }
            arr[i][minc] = temp->val;
            temp = temp->next;
        }
        minc++;
        if (minr > maxr || minc > maxc) {
            break;
        }
    }
    return arr;
}
// LEETCODE 2326(MEDIUM)
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