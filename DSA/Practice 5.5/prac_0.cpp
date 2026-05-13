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

void insert_at_head(node *&head, int val)
{
    node *new_node = new node(val);
    new_node->next = head;
    head = new_node;
}

void insert_at_tail(node *&head, node *&tail, int idx, int val)
{
    node *new_node = new node(val);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    tail->next = new_node;
    tail = new_node;
}

void print_linked_list(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

void insert_at_any_pos(node * &head,int idx,int val)
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

void size_list(node * head)
{
    int cnt = 0;
    node * temp = head;
    while (temp !=NULL)
    {
        cnt ++;
        temp = temp->next;
    }
    cout << "Size =" << cnt << endl;
    
}

int main()
{
    node *head = new node(10);
    node *a = new node(30);
    node *tail = new node(60);
    head->next = a;
    a->next = tail;

   // insert_at_head(head, 100);
  //  insert_at_tail(head, tail, 2, 63);
     insert_at_any_pos(head,2,40);
    print_linked_list(head);
    //cout <<"Tail =" <<tail->val << endl;
    size_list(head);

    return 0;
}