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

void delete_at_tail( node * & head,int idx,node *&tail)
{
   node * temp = head;
   for (int i = 0; i < idx-1; i++)
   {
    temp = temp->next;
   }
   node * deletenode = temp->next;
   temp->next = temp->next->next;
   delete deletenode;
   tail = temp;
   
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
    cout << "Before delete Tail = "<< tail->val<<endl;
    delete_at_tail(head,3,tail);
    print_linked_list(head);
    cout << "After delete Tail = "<< tail->val;
    
    return 0;
}
// delete at pos & tail same approach.