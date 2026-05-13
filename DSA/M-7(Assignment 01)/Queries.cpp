#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    long long int val;  // long long করা
    node *next;

    node(long long int val)  // long long করা
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_head(node *&head, node *&tail, long long int  v)  // tail প্যারামিটার যোগ করুন
{
    node *new_node = new node(v);
    new_node->next = head;
    head = new_node;
    
    // যদি লিস্ট খালি ছিল
    if (tail == NULL) {
        tail = head;
    }
}

void insert_tail(node *&head, node *&tail, long long int v)
{
    node *new_node = new node(v);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }

    tail->next = new_node;
    tail = new_node;
}

void delete_index(node *&head, node *&tail, long long int idx)
{
    if (head == NULL)
    {
        return;
    }
    
    // প্রথম নোড ডিলিট
    if (idx == 0)
    {
        node *del = head;
        head = head->next;
        delete del;
        
        // যদি লিস্ট খালি হয়ে যায়
        if (head == NULL) {
            tail = NULL;
        }
        return;
    }
    
    // অন্য নোড ডিলিট
    node *temp = head;
    for (int i = 0; i < idx - 1; i++)
    {
        if(temp == NULL || temp->next == NULL)
        return;
        temp = temp->next;
    }
    
    if(temp->next == NULL) return;
    
    node *del = temp->next;
    temp->next = temp->next->next;
    
    // যদি শেষ নোড ডিলিট হয়
    if(temp->next == NULL) {
        tail = temp;
    }
    
    delete del;
}

void print_linked_list(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    node *head = NULL;
    node *tail = NULL;
    int q;
    cin >> q;
    
    while (q--)
    {
        int x;
        long long int v;
        cin >> x >> v;
        
        if (x == 0)
            insert_head(head, tail, v);  // tail পাঠান
        else if (x == 1)
            insert_tail(head, tail, v);
        else if (x == 2)
            delete_index(head, tail, v);

        print_linked_list(head);
    }

    return 0;
}