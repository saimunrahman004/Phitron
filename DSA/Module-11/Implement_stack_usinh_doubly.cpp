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

class myStack
{
   public :
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
           tail->next = newnode;
           newnode->pre = tail;
           tail = newnode;
        }
        void pop()  //0(1)
        {
            sz--;
           node * del = tail;
           tail = tail->pre;
           delete del;
           if(tail == NULL)
           {
              head = NULL;
              return;
           }
           tail->next =NULL;
        }
        int top()//0(1)
        {
            return tail->val;
        }
        int size() //0(1)
        {
            return sz;
        }
        bool empty()//0(1)
        {
            return head == NULL;
        }
};
int main ()
{
    myStack st;
    int n;
    cin >> n;
    for (int i = 0; i <n; i++)
    {
        int x; cin >> x;
        st.push(x);
    }

    while(!st.empty())
    {
        cout << st.top()<< endl;
        st.pop();
    }
    

    return 0;
}