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
node * input_tree()
{
    int val;
    cin >> val;
    node *root ;
    if(val==-1) root =NULL;
    else 
    root = new node(val);
    queue<node*>q;
    if(root)
    q.push(root);
    while(!q.empty())
    {
        //1.
        node * f = q.front();
        q.pop();
         
        int l,r; cin >>l>>r;
        node * myleft,*myright;
        if(l==-1) myleft = NULL;
        else
        myleft = new node(l);
         if(r==-1) myright = NULL;
        else
        myright = new node(r);
         f->left = myleft;
         f->right= myright;
        //
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);

    }
    return root;
}
int sum_except_leaf_nodes(node * root)
{
    if(root==NULL)
    return 0;
    if(root->left==NULL && root->right==NULL)
    return 0;

    int l = sum_except_leaf_nodes(root->left);
    int r = sum_except_leaf_nodes(root->right);
    int summ = root->val + l +r;
    return summ;
}
int main ()
{
    node * root = input_tree(); 
    cout << sum_except_leaf_nodes(root);
    return 0;
}