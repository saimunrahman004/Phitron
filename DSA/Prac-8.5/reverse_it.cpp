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

void print_backward(node * tail)
{
    node * tmp = tail;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->pre;
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
    print_backward(tail);

   
    
    return 0;
}