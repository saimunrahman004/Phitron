#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    string val;
    node *next;
    node *pre;

    node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->pre = NULL;
    }
};

void insert_at_tail(node *&head, node *&tail, string val)
{
    node *newnode = new node(val);
    if (head == NULL)
    {
        head = tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->pre = tail;
    tail = newnode;
}

int main()
{
    node *head = NULL;
    node *tail = NULL;
    string val;
    while (cin >> val && val != "end")
    {
        insert_at_tail(head, tail, val);
    }
    int q; cin >> q;
    node * cur = head;
    while(q--)
    {
        string commd;
        cin >> commd;
        if(commd == "visit")
        {
            string target; cin >> target;
            node * temp = head;
            bool found = false;
            while(temp!=NULL)
            {
                if(temp->val == target)
                {
                    cur = temp;
                    cout << cur->val<<endl;
                    found = true;
                    break;
                }
                temp = temp->next;
            }
            if(!found)
            cout<<"Not Available\n";
        }
        else if(commd == "next")
        {
            if(cur != NULL && cur->next!=NULL)
            {
                cur = cur->next;
                cout << cur->val<<endl;
            }
            else
            cout << "Not Available" << endl;
        }
        else if(commd == "prev")
        {
             if(cur != NULL && cur->pre!=NULL)
             {
                cur = cur->pre;
                cout << cur->val << endl;
             }
             else
             cout << "Not Available" << endl;

        }
    }
    return 0;
}