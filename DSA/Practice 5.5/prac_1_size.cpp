// Question: Create a singly linked list and print the size of the linked list.

#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int val;
    node* next;

    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

// tail এ insert
void insert_at_tail(node *&head, node *&tail, int val)
{
  node *nw = new node(val);
  if (head == NULL)
  {
    head = tail = nw;
    return;
  }
  tail->next = nw;
  tail = nw;
}

// size print (void)
void size_of_list(node* head)
{
    int cnt = 0;
    node* temp = head;

    while(temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }

    cout << cnt << endl;
}

int main()
{
    node* head = NULL;
    node* tail = NULL;

    int n;
    cin >> n;          // কয়টা value

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;      // value
        insert_at_tail(head,tail, x);
    }

    size_of_list(head);

    return 0;
}