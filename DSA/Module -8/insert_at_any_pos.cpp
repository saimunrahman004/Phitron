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

void insert_at_any_pos(node *&head,int idx,int val)
{
    node *newnode = new node(val);
    node * temp = head;
    for(int i=0; i<idx-1; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next->pre = newnode;

    temp->next = newnode;
    newnode->pre = temp;
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

    insert_at_any_pos(head,2, 100);
     insert_at_any_pos(head,1, 500);
    print_forward(head);

    return 0;
}