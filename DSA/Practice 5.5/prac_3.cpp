// Question: Create a singly linked list and print the middle element. If there are
// multiple values in the middle print both.
// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//   int val;
//   node *next;

//   node(int val)
//   {
//     this->val = val;
//     this->next = NULL;
//   }
// };

// void insert_at_tail(node *&head, node *&tail, int val)
// {
//   node *newnode = new node(val);
//   if (head == NULL)
//   {
//     head = tail = newnode;
//     return;
//   }
//   tail->next = newnode;
//   tail = newnode;
// }

// int list_size(node*&head)
// {
//   int cmt = 0;
//   node * temp = head;
//   while (temp != NULL)
//   {
//    cmt ++;
//    temp=temp->next;
//   }
//   return cmt;
// }

// void print_middle(node * &head)
// {
//    int size = list_size(head); 
//    node * temp = head;

//    // Odd case
//    if(size % 2 == 1)
//    {
    
//      for(int i = 0;i<(size/2);i++)
//      {
//        temp = temp->next ;
//      }
//      cout << temp->val<<endl;
//    }
//    else 
//    {
//       for(int i = 0;i<(size/2)-1;i++)
//       {
//          temp = temp->next;
//       }
//        cout << temp->val <<" "<<temp->next->val<<endl;
//    }
// }
// int main()
// {
//   node *head = NULL;
//   node *tail = NULL;
//   int n;
//   cin >> n;
//   for (int i = 0; i < n; i++)
//   {
//     int x;
//     cin >> x;
//     insert_at_tail(head, tail, x);
//   }
  
//   print_middle(head);
 

//   return 0;
// }




#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (cin >> val)
    {
        insert_at_tail(head, tail, val);
    }

    // count sizes
    Node *temp = head;
    int sz = 0;
    while (temp != NULL)
    {
        sz++;
        // cout << temp->val << " ";
        temp = temp->next;
    }
    // cout << sz << endl;

    if (sz % 2 == 0)
    {
        // even size
        int mid = sz / 2;
        Node *temp3 = head;
        for (int i = 0; i < mid - 1; i++)
        {
            temp3 = temp3->next;
        }
        cout << temp3->val << " " << temp3->next->val << endl;
    }
    else
    {
        // odd size
        int mid = sz / 2;
        Node *temp2 = head;
        for (int i = 0; i < mid; i++)
        {
            temp2 = temp2->next;
        }
        cout << temp2->val << endl;
    }
    return 0;
}