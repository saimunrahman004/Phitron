#include<bits/stdc++.h>
using namespace std;
int main ()
{
//    1.list<int>l;
//     cout << l.size();
       
    //   list<int>l(10);
    //   cout << l.size();

    //  3. list<int>l(10,3);
    //   for(int val : l)
    //   {
    //      cout << val << endl;
    //   }

//   4.  list<int>l = {1,2,3,4,5};
//     list<int>l2(l);
//     for(int val : l2)
//       {
//         cout << val << endl;
//     }


    //int a [] = {10,20,30};
    //list<int>l2(a,a+3);
    vector<int> v = {25,63,96};
    list<int>l2(v.begin(),v.end());

    //l2.clear();
    // cout << l2.size() << endl;
    // if(l2.empty())
    // {
    //     cout << "Empty";
    // }
    l2
    .resize(5);
    for(int val : l2)
    {
         cout << val << endl;
     }

    return 0;
}