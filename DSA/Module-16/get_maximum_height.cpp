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
int max_height(node * root)
{
    if(root == NULL)
        return 0;
    
    if(root->left==NULL && root->right==NULL)//leaf node
        return 0;

    int l =max_height(root->left);
    int r = max_height(root->right);
    return max(l,r)+1;

}
int main ()
{
    node * root = input_binary();
    cout<<max_height(root);
    return 0;
}