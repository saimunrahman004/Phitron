#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,m; cin >> n >> m;
    stack<int>s;
    for (int i = 0; i <n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }
    queue<int> q;
     for (int i = 0; i <m; i++)
     {
        int x; cin >> x;
        q.push(x);
     }
     if( n != m)
     {
        cout << "NO\n";
        return 0;
     }

     bool flag = true;
     while(!s.empty())
     {
        if(s.top() != q.front())
        {
            flag = false;
            break;
        }
        s.pop();
        q.pop();
     }

     if(flag == true)
     cout << "YES\n";
     else
     cout << "NO\n";

    
 

    return 0;
}