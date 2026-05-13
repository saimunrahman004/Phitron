// Question: Take a stack of size N as input and copy those elements to another stack
// to get the values in the order they were inserted and print them. You should use
// STL to solve this problem.

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    stack<int> s1,s2;
    for (int i = 0; i <n; i++)
    {
       int x; cin >> x;
       s1.push(x);
    }
    while (!s1.empty())
    {
      s2.push(s1.top());
      s1.pop();
    }
       while (!s2.empty())
       {
        cout << s2.top() << " ";
        s2.pop();
       }
    
    
    return 0;
}