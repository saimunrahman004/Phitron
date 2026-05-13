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
        cout << temp->val << endl;
        temp = temp->next;
    }
}

void reverse_linked_list(node *&head,node * temp,node *&tail)
{
   if(temp->next == NULL)
   {
      head = temp;
      return;
   }
   reverse_linked_list(head,tail,temp->next);//recursion
   temp->next->next = temp;
   temp->next = NULL;
   tail = temp;

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
    reverse_linked_list(head,head,tail);
    //print_linked_list(head);
    cout <<"Head_value ="<<  head->val<< endl;
    cout <<"Tail_value ="<<  tail->val<< endl;
    
    return 0;
}