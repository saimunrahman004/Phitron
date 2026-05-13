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
void level_order(node *root)
{
    if(root == NULL)
    {
        cout <<"NO Tree"<< endl;
        return;
    }
    queue<node*>q;
    q.push(root);
    while(!q.empty())
    {
        //1. ber kore ana
        node * f = q.front();
        q.pop();

        //2. ai node niea kaj kora
        cout<< f->val<<" ";

        //3.children push kora
        if(f->left != NULL)// or if(f->left)
            q.push(f->left);
        if(f->right !=NULL)
            q.push(f->right);
    }
}
void insert(node *&root,int val)
{
    if(root==NULL)
        root = new node(val);
    
        if(root->val > val)
        {
            if(root->left == NULL)
                root->left = new node(val);
            else
                insert(root->left,val);
        }
        else
        {
             if(root->right== NULL)
                root->right = new node(val);
            else
                insert(root->right,val);
        }
}
int main ()
{
    node * root = input_tree();
    int val ;
    cin >> val;
    insert(root,val);
    insert(root,11);
    level_order(root);
    return 0;
}
