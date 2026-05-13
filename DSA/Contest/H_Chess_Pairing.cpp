#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t; cin >> t;
    while(t--)
    {
        int n,x;
        cin >> n >> x;
        int total = 2* n; int unrated = total - x;
        if(x > unrated)
        cout << x-unrated << endl;
        else 
        cout << 0 << endl;
    }
    return 0;
}