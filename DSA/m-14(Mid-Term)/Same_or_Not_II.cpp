
#include <iostream>
using namespace std;

// নোড স্ট্রাকচার
class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};



class MyStack {
public:
    Node* head = NULL;
    int sz = 0;

    void push(int val) {
        sz++;
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }

    void pop() {
        sz--;
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
    }

    int top() {
        return head->val;
    }

    int size() {
        return sz;
    }

    bool empty() {
        return head == NULL;
    }
};



class MyQueue {
public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

    void push(int val) {
        sz++;
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void pop() {
        sz--;
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL) tail = NULL;
    }

    int front() {
        return head->val;
    }

    bool empty() {
        return head == NULL;
    }
};

int main() {
    int n, m;
    cin >> n >> m;

    MyStack s;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        s.push(x);
    }

    MyQueue q;
    for (int i = 0; i < m; i++) {
        int x; cin >> x;
        q.push(x);
    }

    if (n != m) {
        cout << "NO" << endl;
        return 0;
    }

    bool flag = true;
    while (!s.empty()) {
        if (s.top() != q.front()) {
            flag = false;
            break;
        }
        s.pop();
        q.pop();
    }

    if (flag == true) 
    cout << "YES" << endl;
    else 
    cout << "NO" << endl;

    return 0;
}