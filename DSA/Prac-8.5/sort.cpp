#include<bits/stdc++.h>
using namespace std;
class node
{
   public :
    int val;
   node * next;
   node * pre;

   node(int val)
   {
     this->val = val;
     this->next = NULL;
     this->pre = NULL;
   }
};

void insert_at_tail(node *& head,node*&tail,int val)
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

void sort_it(node * &head)
{
    for(node * i = head; i->next != NULL; i= i->next)
    {
        for(node * j = i->next; j != NULL; j= j->next)
        {
            if(i->val > j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
}

void print_forward(node *head)
{
    node * tmp =head;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}


int main ()
{
    node * head = NULL;
    node * tail = NULL;

    node * head2 = NULL;
    node * tail2 = NULL;

    int val;
    while(1)
    {
        cin >> val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }

     while(1)
    {
        cin >> val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head2,tail2,val);
    }
    sort_it(head);
    print_forward(head);
    
    return 0;
}