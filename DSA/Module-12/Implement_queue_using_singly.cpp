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
class myQueue
{
    public:
    node * head = NULL;
    node * tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
        node * newnode = new node(val);
        if(head == NULL)
        {
            head = tail = newnode;
            return;
        }
        tail->next= newnode;
        tail = newnode;
    }

    void pop()
    {
        sz--;
        node * del = head;
        head = head->next;
        delete del;
        if(head == NULL)
        {
            tail = NULL;
        } 
    }

    int front()
    {
        return head->val;
    }
    int back()
    {
        return tail->val;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        if(head == NULL)
            return true;
        else
            return false;
        // return head == NULL;
    }


};
int main ()
{
    myQueue q;
    int n;
    cin >> n;
    for(int i =0 ;i<n;i++)
    {
        int val; cin >> val;
        q.push(val);
    }

    while(!q.empty())
    {
        cout << q.front()<< endl;
        q.pop();
    }
    return 0;
}