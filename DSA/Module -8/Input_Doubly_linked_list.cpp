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

void insert_at_tail(node *&head, node *&tail,int val)
{
    node *newnode = new node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->pre = tail;
    tail = newnode; 
}
int main()
{
    node *head = NULL;
    node *tail = NULL;

    int val;
    while (1)
    {
        cin >> val;
        if(val ==-1)
        {
            break;
        }
        insert_at_tail(head,tail, val);
    }
    
    print_forward(head);

    return 0;
}