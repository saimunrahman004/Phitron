#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node *pre;

    node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->pre = NULL;
    }
};

void print_forward(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void delete_at_head(node *&head, node *&tail)
{
    // ১. চেক করা লিস্টটি আগে থেকেই খালি কি না
    if (head == NULL)
    {
        return;
    }

    node *deletenode = head;
    head = head->next;
    delete deletenode;

    // ২. যদি ডিলিট করার পর লিস্ট খালি হয়ে যায়
    if (head == NULL)
    {
        tail = NULL;
        return;
    }
    head->pre = NULL;
}
int main()
{
    node *head = new node(10);
    node *a = new node(20);
    node *tail = new node(30);

    head->next = a;
    a->pre = head;

    a->next = tail;
    tail->pre = a;

    delete_at_head(head, tail);
    print_forward(head);

    return 0;
}