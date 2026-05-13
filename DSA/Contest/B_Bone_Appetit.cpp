#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,m,x,y;
    cin >> n >> m>> x >> y;
    int bones = n*x;
    int blood = m*y;
    int ans = bones + blood;
    cout << ans << endl;
    return 0;
}