#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *pre;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->pre = NULL;
    }
};

int list_size(Node *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}

void insert_head(Node *&head, Node *&tail, int v)
{
    Node *newnode = new Node(v);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head->pre = newnode;
    head = newnode;
}

void insert_tail(Node *&head, Node *&tail, int v)
{
    Node *newnode = new Node(v);
    if (tail == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->pre = tail;
    tail = newnode;
}

void insert_at_pos(Node *head, int x, int v)
{
    Node *newnode = new Node(v);
    Node *tmp = head;
    for (int i = 0; i < x - 1; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next->pre = newnode;
    tmp->next = newnode;
    newnode->pre = tmp;
}

void print_normal(Node *head)
{
    cout << "L -> ";
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

void print_reverse(Node *tail)
{
    cout << "R -> ";

    while (tail != NULL)
    {
        cout << tail->val << " ";
        tail = tail->pre;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;

    while (q--)
    {
        int x, v;
        cin >> x >> v;

        int n = list_size(head);

        if (x > n || x < 0)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            if (x == 0)
                insert_head(head, tail, v);
            else if (x == n)
                insert_tail(head, tail, v);
            else
                insert_at_pos(head, x, v);

            print_normal(head);
            print_reverse(tail);
        }
    }
    return 0;
}