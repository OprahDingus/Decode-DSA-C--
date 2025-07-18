#include <iostream>
#include <queue>
using namespace std;

void display (queue<int>& q) {
    int n = q.size();
    for (int i = 1; i <= n; i++) {
        int x = q.front();
        cout << x << " ";
        q.pop();
        q.push(x);
    }
    cout << endl;
}

int main (void) {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    // cout << q.front() << endl;
    // cout << q.back() << endl;
    display(q);
    q.pop();
    display(q);
    // cout << q.size() << endl;
    // cout << q.front();
}