#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *next;

    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(node *&head, node *&tail, int val)
{
    node *newnode = new node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
void print_diff(node *head)
{
    if (head == NULL)
    {
        cout << 0;
        return;
    }
    int mx = head->val;
    int mn = head->val;
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->val > mx)
        {
            mx = temp->val;
        }
        if (temp->val < mn)
        {
            mn = temp->val;
        }
        temp = temp->next;
    }
    cout << mx-mn;
}

int main()
{
    node *head = NULL;
    node *tail = NULL;
    int val;
    while (1)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    print_diff(head);
    return 0;
}