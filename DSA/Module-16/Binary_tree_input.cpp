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
    cin >> val;
    node * root;
    if(val == -1) root= NULL;
   else  root = new node(val);
    queue<node*>q;
    if(root!=NULL) //if(root)
    q.push(root);
    while (!q.empty())
    {
        //1. ber kore ana
        node * pa = q.front();
        q.pop();

        //2. ai node niea kaj kora
        int l,r;
        cin >> l >> r;
        node * myleft,*myright;
        if(l == -1) myleft= NULL;
        else  myleft = new node(l);

        if(r == -1) myright = NULL;
        else myright = new node(r);
        pa->left = myleft;
        pa->right = myright;
        
        //3. children push
         if(pa->left != NULL)// or if(f->left)
            q.push(pa->left);
        if(pa->right !=NULL)
            q.push(pa->right);

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

int main ()
{
   node * root = input_tree(); 
   level_order(root);
    return 0;
}