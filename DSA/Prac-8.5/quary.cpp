// Question: You have a doubly linked list which is empty initially. You need to
// take a value Q which refers to queries. For each query you will be given X and
// V. You will insert the value V to the Xth index of the doubly linked list and print
// the list in both left to right and right to left. If the index is invalid then print
// “Invalid”.


#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *next;
    Node *pre;
    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->pre = NULL;
    }
};

// লিস্টের সাইজ বের করার ফাংশন
int list_size(Node *head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}

// শুরুতে ইনসার্ট করা
void insert_head(Node *&head, Node *&tail, int v) {
    Node *newNode = new Node(v);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->pre = newNode;
    head = newNode;
}

// শেষে ইনসার্ট করা
void insert_tail(Node *&head, Node *&tail, int v) {
    Node *newNode = new Node(v);
    if (tail == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->pre = tail;
    tail = newNode;
}

// মাঝখানে ইনসার্ট করা
void insert_at_pos(Node *head, int x, int v) {
    Node *newNode = new Node(v);
    Node *tmp = head;
    for (int i = 0; i < x - 1; i++) {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next->pre = newNode;
    tmp->next = newNode;
    newNode->pre = tmp;
}

// প্রিন্ট ফাংশনগুলো
void print_normal(Node *head) {
    
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

void print_reverse(Node *tail) {
    
    while (tail != NULL) {
        cout << tail->val << " ";
        tail = tail->pre;
    }
    cout << endl;
}

int main() {
    Node *head = NULL, *tail = NULL;
    int q;
    cin >> q;

    while (q--) {
        int x, v;
        cin >> x >> v;

        int n = list_size(head);

        if (x > n || x < 0) {
            cout << "Invalid" << endl;
        } else {
            if (x == 0) insert_head(head, tail, v);
            else if (x == n) insert_tail(head, tail, v);
            else insert_at_pos(head, x, v);

            print_normal(head);
            print_reverse(tail);
        }
    }
    return 0;
}