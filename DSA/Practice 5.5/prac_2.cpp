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
        head = tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void sort_linked_list(node *head)
{
    for (node *i = head; i->next != NULL; i = i->next)
    {
        for (node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val > j->val) // ascending
            {
                swap(i->val, j->val);
            }
        }
    }
}

bool has_duplicates(node *head)
{
    node *temp = head;
    while (temp != NULL && temp->next != NULL)
    {
        if (temp->val == temp->next->val)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main()
{
    node *head = NULL;
    node *tail = NULL;

    int n;
    cin >> n; // node সংখ্যা ইনপুট নাও
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        insert_at_tail(head, tail, val);
    }

    sort_linked_list(head);

    if (has_duplicates(head))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}