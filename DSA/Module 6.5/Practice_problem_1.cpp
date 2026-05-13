//Question: Take two singly linked lists as input and check if their sizes are same or
//not.

#include<bits/stdc++.h>
using namespace std;
class node
{
   public :
    int val;
   node * next;

   node(int val)
   {
     this->val = val;
     this->next = NULL;
   }
};

void insert_at_tail(node *&head,node*&tail,int val)
{
    node * newnode = new node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;

}

void print_linked_list(node * &head)
{
    node * temp = head;
    while(temp!=NULL)
    {
        cout << temp->val<< endl;
        temp = temp->next;
    }
    
}

void print_size_linked_list(node *&head,node * &head2)
{
    int count = 0,count2 = 0;
    node * temp = head;
    while(temp!=NULL)
    {
        count ++;
        temp = temp->next;
    }
     node * temp2 = head2;
     while(temp2 !=NULL)
    {
        count2 ++;
        temp2 = temp2->next;
    }

    if (count == count2)
    {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    
}
int main ()
{
    node * head = NULL;
    node * tail = NULL;

    node * head2 = NULL;
    node * tail2 = NULL;
    int val;
    while(true)
    {
        cin >> val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }

    while (true)
    {
         cin >> val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head2,tail2,val);
    }
    

    print_size_linked_list(head,head2);
    return 0;
}