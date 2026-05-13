#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *left;
    node *right;
    node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void preorder(node * root)
{
    if(root == NULL)
    return;
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(node * root)
{
    if(root == NULL)
    return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}

void postorder(node * root)
{
    if(root == NULL)
    return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<" ";
}
int main()
{
    node *root = new node(1);
    node *a = new node(7);
    node *b = new node(9);
    node *c = new node(2);
    node *d= new node(6);
    node *e = new node(9);
    node *f = new node(5);
    node *g = new node(11);
    node *h = new node(5);

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    b->right = e;
    e->left = h;
    d->left = f;
    d->right = g;


    preorder(root);
    inorder(root);
    postorder(root);
    return 0;
}