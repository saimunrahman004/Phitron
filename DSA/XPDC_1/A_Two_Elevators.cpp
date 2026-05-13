#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        int lift_time1 = a-1;
        int lift_time2 = abs(b-c) + c-1;
        if(lift_time1 < lift_time2) cout << 1 << endl;
        else if(lift_time1 > lift_time2) cout << 2 << endl;
        else cout << 3 << endl;
    }
    return 0;
}