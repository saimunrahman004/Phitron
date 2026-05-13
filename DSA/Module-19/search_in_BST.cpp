#include<bits/stdc++.h>
using namespace std;
class node
{
   public :
    int val;
   node * left;
   node * right;
   node(int val)
   {
     this->val = val;
     this->left = NULL;
     this->right = NULL;
   }
};
node* input_tree()
{
    int val;
    cin >>val;
    node * root;
    if(val==-1) root = NULL;
    else
    root = new node(val);
    queue<node*>q;
    if(root != NULL)
    q.push(root);
    while(!q.empty())
    {
        node * f = q.front();
        q.pop();

        int l,r;
        cin >> l>>r;
        node * myleft,*myright;
        if(l == -1) myleft = NULL;
        else
        myleft = new node(l);

        if(r == -1) myright = NULL;
        else
        myright = new node(r);
        f->left = myleft;
        f->right = myright;

        // children push
        if(f->left)
        q.push(f->left);
        if(f->right)
        q.push(f->right);
    }
    return root;
}
bool search(node * root,int data)
{
    if(root == NULL)
    return false;

    if(root->val == data)
    return true;

    if(root->val > data)
    return search(root->left,data);
    
    if(root->val < data)
    return search(root->right,data);
}
int main ()
{
    node * root = input_tree();
    int data ;
    cin >> data;
    search(root,data);

    if(search(root,data))
        cout<<"Found\n";
    else
        cout<<"Not_Found\n";

    return 0;
}
