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
void left_side(node *root)
{
    if(root == NULL) return;

    if(root->left) 
    left_side(root->left);
    else 
    left_side(root->right);           

    cout << root->val << " ";
}
void right_side(node * root)
{
    if(root == NULL) return;

    cout << root->val << " "; 

    if (root->right)
    right_side(root->right); 
    else right_side(root->left);
}

int main ()
{
    node * root = input_tree(); 
    if(root == NULL)
    return 0;

    if(root->left)
    left_side(root->left);
    
    cout<<root->val<<" ";

    if(root->right)
    right_side(root->right);
    
    return 0;
}