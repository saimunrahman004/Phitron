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
node * input_binary()
{
    int val;
    cin>>val;
    node * root;
    if(val==-1) root =NULL;
    else 
    root = new node(val);
    queue<node*>q;
    if(root)
    q.push(root);
    while(!q.empty())
    {
        //1
        node * f = q.front();
        q.pop();

        int l,r; cin >> l>>r;
        node * mylf,*myrit;
        if(l ==-1) mylf= NULL;
        else mylf = new node(l);
        if(r ==-1) myrit= NULL;
        else myrit = new node(r);
        f->left = mylf;
        f->right=myrit;
        //3.
        if(f->left)
        q.push(f->left);
        if(f->right)
        q.push(f->right);

    }
    return root;
}
int count_leaf_node(node * root)
{
    if(root == NULL)
        return 0;
    
    if(root->left==NULL && root->right==NULL)
        return 1;

    int l = count_leaf_node(root->left);
    int r = count_leaf_node(root->right);
    return l+r;

}
int main ()
{
    node * root = input_binary();
    cout<<count_leaf_node(root);
    return 0;
}