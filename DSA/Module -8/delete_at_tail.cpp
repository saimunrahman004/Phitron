#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node *pre;

    node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->pre = NULL;
    }
};

void print_forward(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void delete_at_tail(node *&head, node *&tail)
{

    // ১. চেক: লিস্ট যদি আগে থেকেই খালি থাকে
    if (tail == NULL) {
        return;
    }
   node * deletenode = tail;
   tail = tail->pre;
   delete deletenode;
//২. চেক: ডিলিট করার পর লিস্ট যদি খালি হয়ে যায় (মানে লিস্টে ১টিই নোড ছিল)
   if(tail == NULL)
   {
      head = NULL;
      return;
   }
   tail->next = NULL;
    
}
int main()
{
    node *head = new node(10);
    node *a = new node(20);
    node *tail = new node(30);

    head->next = a;
    a->pre = head;

    a->next = tail;
    tail->pre = a;

    delete_at_tail(head, tail);
    print_forward(head);

    return 0;
}