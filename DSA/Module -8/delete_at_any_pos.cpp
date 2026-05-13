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
void delete_at_any_pos(node *&head, int idx)
{
    node * temp = head;
    for(int i=0;i<idx-1;i++)
    {
        temp = temp->next;
    }
    node * deletenode = temp->next;
    temp->next = temp->next->next; 
    temp->next->pre = temp;
    delete deletenode;
    
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

    delete_at_any_pos(head, 1);
    print_forward(head);

    return 0;
}



//2.
void delete_at_any_pos(node *&head, node *&tail, int idx)
{
    // ১. যদি লিস্ট খালি থাকে
    if (head == NULL) return;

    // ২. যদি প্রথম নোড (Index 0) ডিলিট করতে হয়
    if (idx == 0)
    {
        node *deleteNode = head;
        head = head->next;
        if (head != NULL) head->pre = NULL;
        else tail = NULL; // লিস্টে ১টিই নোড ছিল
        delete deleteNode;
        return;
    }

    node *temp = head;
    // টার্গেট নোডের আগের নোড পর্যন্ত যাওয়া
    for (int i = 0; i < idx - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    // ইনডেক্স কি লিস্টের বাইরে? অথবা ডিলিট করার মতো নোড নেই?
    if (temp == NULL || temp->next == NULL) return;

    node *deleteNode = temp->next;

    // ৩. যদি মাঝখানের নোড ডিলিট করি
    temp->next = deleteNode->next;

    if (deleteNode->next != NULL) // যদি এটি শেষ নোড না হয়
    {
        deleteNode->next->pre = temp;
    }
    else // যদি এটি শেষ নোড হয়, তবে টেইল আপডেট করতে হবে
    {
        tail = temp;
    }

    delete deleteNode;
}