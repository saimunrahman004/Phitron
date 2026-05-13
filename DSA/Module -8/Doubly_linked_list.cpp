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

void print_forward(node * head)
{
    node * tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
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
    node * head = new node(10);
    node * a = new node(20);
    node * tail = new node(30);

    head->next = a;
    a->pre = head;

    a->next = tail;
    tail->pre = a; 

    print_forward(head);
    print_backward(tail);

    return 0;
}