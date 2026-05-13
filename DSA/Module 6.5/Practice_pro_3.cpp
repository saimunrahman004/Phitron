//Question: Take a singly linked list as input, then print the maximum value of them


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

void find_max(node * & head)
{
    node * temp = head;
    int mx = temp->val;
    while (temp != NULL)
    {
       if(temp->val > mx)
       {
         mx = temp->val;
       }
       temp= temp->next;
    }
    cout << mx ;
    
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
    find_max(head);
    
    return 0;
}