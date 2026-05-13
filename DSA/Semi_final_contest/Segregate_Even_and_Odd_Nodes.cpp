#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n; cin >> n;
    list<int>even;
    list<int>odd;
    for (int i = 0; i <n; i++)
    {
        int val; cin >> val;
       if(val% 2 ==0)
       {
        even.push_back(val);
       }
       else
       odd.push_back(val);
    }
    for(int x: even)
    cout<< x << " ";

    for(int y : odd)
      cout<< y << " ";
    return 0;
}