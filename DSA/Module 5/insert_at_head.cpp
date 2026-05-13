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

void insert_at_head(node*&head,int val)
{
   node * new_node = new node(val);
   new_node->next = head;
   head = new_node;
}

void print_linked_list(node * head)
{
    node * temp = head;
    while (temp !=NULL)
    {
        cout << temp->val<<endl;
        temp = temp->next;
    }
    
}

int main()
{
   node * head = new node(10);
   node * a = new node(20);
   node *b = new node(30);
   head->next = a;
   a->next = b;
   
   insert_at_head(head,100);
   insert_at_head(head,200);
   print_linked_list(head);

    return 0;
}