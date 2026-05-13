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

void insert_at_any_pos(node*&head,int idx,int val)
{
   node * new_node = new node(val);
    node * temp = head;
   for (int i = 0; i <idx-1; i++)
   {
      temp = temp->next;
   }
   new_node->next = temp->next;
   temp->next = new_node;
   

 
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
   
   insert_at_any_pos(head,2,40);
   insert_at_any_pos(head,2,50);
   
   print_linked_list(head);

    return 0;
}
