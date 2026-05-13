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
void print_node_level(node*root,int val)
{
    if(root==NULL)
    {
        cout<<"Invalid";
        return;
    }
    queue<pair<node*,int>>q;
    q.push({root,0});
    bool found = false;
    while (!q.empty())
    {
      pair<node*,int>pa= q.front();
      q.pop();
      node * n = pa.first;
      int level = pa.second;

      //kaj
      if(level == val)
      {
        found = true;
        cout<<n->val<<" ";
      }
      //
      if(n->left)
      q.push({n->left,level+1});
      if(n->right)
      q.push({n->right,level+1});
    }
    if(!found)
    cout<<"Invalid";
    
}

int main ()
{
    node * root = input_tree(); 
    int val ;
    cin >> val;
    print_node_level(root,val);
    return 0;
}