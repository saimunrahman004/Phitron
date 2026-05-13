#include<bits/stdc++.h>
using namespace std;
int main ()
{
    vector<int>v = {1,2,3,2,5,2};
    vector<int>v2 ={100,220,369};
    //v.insert(v.begin()+2,100);
   // v.insert(v.begin()+2,v2.begin(),v2.end());

    //v.erase(v.begin()+3);// single_value
    //v.erase(v.begin()+1,v.begin()+5);
    //replace(v.begin(),v.end(),2,100);
    //replace(v.begin(),v.end()-1,2,100);
    
    // for(int x : v)
    // {
    //     cout << x << " ";
    // }

     auto it = find(v.begin(),v.end(),5);
     if(it == v.end())
     {
        cout << "Not Found";
     }
     else
     {
        cout << "Found";
     }

     for(auto it = v.begin();it < v.end();it++)
     {
        cout << *it << " ";
     }
    
    return 0;
}