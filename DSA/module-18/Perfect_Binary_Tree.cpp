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

int count_node(node * root)
{
    if(root == NULL)
        return 0;
    int l = count_node(root->left);
    int r = count_node(root->right);
    return l+r+1;

}
int max_depth(node* root)
{
    if(root== NULL) 
    return 0;
    if(root->left==NULL && root->right==NULL)
        return 1;
    int l = max_depth(root->left);
    int r = max_depth(root->right);
    return max(l, r) + 1;
}

int main ()
{
    node * root = input_tree();
    int total_nodes = count_node(root);
    int h = max_depth(root);
    int ans = pow(2,h)-1;
    if(total_nodes==ans)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}