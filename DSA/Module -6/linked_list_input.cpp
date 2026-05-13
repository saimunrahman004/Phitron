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
    print_linked_list(head);
    
    return 0;
}