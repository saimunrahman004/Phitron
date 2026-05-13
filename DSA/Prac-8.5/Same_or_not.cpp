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

bool check_same(node * &head,node *&head2)
{
    node *tmp1 = head;
    node *tmp2 = head2;

    while (tmp1 != NULL && tmp2 != NULL) {
        if (tmp1->val != tmp2->val) {
            return false; // মান না মিললে সরাসরি false
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    // Jodi kno list age sesh hoiea jay
    if(tmp1 != NULL || tmp2 != NULL)
    return false;

    else 
    return true;
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

    bool ans = check_same(head,head2);
    if(ans == true)
    {
        cout << "YES";
    }
    else 
    {
        cout << "NO";
    }
    
    return 0;
}