#include<bits/stdc++.h>
using namespace std;
int main ()
{
     int t; cin >> t;
    while(t--)
    {
       long long  int n,k;
       cin >> n >> k;
       long long int cost = n / (k+1);
       long long int net_debt = n - (k * cost);
       cout << net_debt << endl;
    }
    return 0;
}