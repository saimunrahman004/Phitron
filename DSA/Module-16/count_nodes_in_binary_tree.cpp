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
    int val; cin >> val;
    node * root;
    if(val== -1) root = NULL;
    else root = new node(val);
    queue<node*>q;
    if(root)
    q.push(root);
    while(!q.empty())
    {
        //1.
        node * pa = q.front();
        q.pop();
        //2.
        int l,r; cin >> l >>r;
        node * myleft,*myright;
        if(l == -1)
        myleft = NULL;
        else 
        myleft = new node(l);
        if(r==-1) myright = NULL;
        else
        myright= new node(r);
        pa->left =myleft;
        pa->right=myright;
        //3.
        if(pa->left!=NULL)
        q.push(pa->left);
        if(pa->right)
        q.push(pa->right);
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
int main ()
{
    node * root = input_tree();
    cout << count_node(root);
    return 0;
}