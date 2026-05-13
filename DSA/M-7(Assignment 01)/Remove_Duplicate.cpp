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



void remove_duplicates(node *head)
{

    node *temp = head;
    while (temp != NULL)
    {
        node *car = temp;
        while (car->next != NULL)
        {
            if (car->next->val == temp->val)
            {
                node *del = car->next;
                car->next = car->next->next;
                delete del;
            }
            else
            {
                car = car->next;
            }
        }
        temp = temp->next;
    }
}

void print_list(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main()
{
    node *head = NULL;
    node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }
    

    remove_duplicates(head);

    print_list(head);

    return 0;
}