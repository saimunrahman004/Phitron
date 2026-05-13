#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    stack<int> st1, st2;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st1.push(x);
    }

    int m;
    cin >> m;

    for(int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        st2.push(x);
    }

    // size check
    if(st1.size() != st2.size())
    {
        cout << "NO";
        return 0;
    }

    // top থেকে compare
    while(!st1.empty())
    {
        if(st1.top() != st2.top())
        {
            cout << "NO";
            return 0;
        }
        st1.pop();
        st2.pop();
    }

    cout << "YES";
    return 0;
}