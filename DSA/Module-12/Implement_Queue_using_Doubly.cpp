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
class myQueue
{
    public:
    node * head = NULL;
    node * tail = NULL;
    int sz = 0;

    void push(int val) //0(1)
    {
        sz++;
        node * newnode = new node(val);
        if(head == NULL)
        {
            head = tail = newnode;
            return;
        }
        tail->next= newnode;
        newnode->pre = tail;
        tail = newnode;
        
    }

    void pop()  //0(1)
    {
        sz--;
        node * del = head;
        head = head->next;
        delete del;
        if(head == NULL)
        {
            tail = NULL;
            return;
        } 
        head->pre = NULL;
    }

    int front() //0(1)
    {
        return head->val;
    }
    int back() //0(1)
    {
        return tail->val;
    }

    int size() //0(1)
    {
        return sz;
    }

    bool empty() //0(1)
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