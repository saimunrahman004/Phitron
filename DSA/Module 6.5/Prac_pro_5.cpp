//Question: Take a singly linked list as input and sort it in descending order. Then
//print the list.


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
void insert_at_tail(node *&head, node *&tail, int val)
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
        cout << temp->val << " ";
        temp = temp->next;
    }

}

void sort_linked_list(node * &head)
{
    for(node * i=head;i->next!=NULL;i=i->next)
    {
        for(node * j=i->next;j!=NULL;j=j->next)
        {
            if(i->val <j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
}
int main ()
{
    node * head = NULL;
    node * tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
       if(val == -1)
       {
        break;
       }
       insert_at_tail(head,tail,val);
    }
     sort_linked_list(head);
    print_linked_list(head);
    
    
    return 0;
}