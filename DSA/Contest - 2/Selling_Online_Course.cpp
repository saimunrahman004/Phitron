#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int x;
     cin >> x;

    if(x == 0)
    {
        cout << 0;
        return 0;
    }
    else 
    {
        double commission = x * 0.2;
        long long int ans = ceil(100 / commission);
        cout << ans;
        
    }
    return 0;
}