#include<bits/stdc++.h>
using namespace std;
int main ()
{
    // list<int>l = {10,20,30,40,50,60,70};
    // list <int> l2 = {100,200};
    // vector<int>v = {2,3,4};

    // list<int> l2;
    // l2 = l;
    // l2.assign(l.begin(),l.end());
    // l.push_back(40);
    // l.push_front(1);

    // l.pop_back();
    // l.pop_front();
    // l.insert(next(l.begin(),2),100);
    // l.insert(next(l.begin(),2),l2.begin(),l2.end());
   // l.insert(next(l.begin(),2),v.begin(),v.end());

   //l.erase(next(l.begin(),2));
   //l.erase(next(l.begin(),2),next(l.begin(),5));

   list <int> l3 = {10,20,30,20,50,20};

   //replace(l3.begin(),l3.end(),20,36);

  auto it =  find(l3.begin(),l3.end(),20);
  if(it == l3.end())
  {
     cout << "found\n";
  }
  else
  {
      cout << "Not Found\n";
  }

    for(int val : l3)
    {
        cout << val << endl;
    }
    return 0;

}