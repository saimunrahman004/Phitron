// Question: Take a singly linked list as input, then take q queries. In each query you
//will be given an index and value. You need to insert those values in the given
//index and print the linked list. If the index is invalid print “Invalid”.

#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int val;
    node* next;

    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(node*& head, node*& tail, int val)
{
    node* newnode = new node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

// linked list print
void print_list(node* head)
{
    node* temp = head;
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

// list size
int get_size(node* head)
{
    int cnt = 0;
    node* temp = head;
    while(temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

// insert at index
void insert_at_index(node*& head, node*& tail, int idx, int val)
{
    int sz = get_size(head);

    if(idx < 0 || idx > sz)
    {
        cout << "Invalid" << endl;
        return;
    }

    node* newnode = new node(val);

    // insert at head
    if(idx == 0)
    {
        newnode->next = head;
        head = newnode;
        print_list(head);
        return;
    }

    // insert at tail
    if(idx == sz)
    {
        tail->next = newnode;
        tail = newnode;
        print_list(head);
        return;
    }

    // insert in middle
    node* temp = head;
    for(int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }

    newnode->next = temp->next;
    temp->next = newnode;

    print_list(head);
}

int main()
{
    node* head = NULL;
    node* tail = NULL;

    int val;
    // initial linked list
    while(true)
    {
        cin >> val;
        if(val == -1) break;
        insert_at_tail(head, tail, val);
    }

    int q;
    cin >> q;

    while(q--)
    {
        int idx, value;
        cin >> idx >> value;
        insert_at_index(head, tail, idx, value);
    }

    return 0;
}