#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n; cin>>n;
    vector<long long int > a(n) ;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<long long int> pre(n);
    pre[0] = a[0];
    for (int i = 1; i <n; i++)
    {
        pre[i] = pre[i - 1] + a[i];
    }
    //eqilibrium index khoja
    for(int i = 0;i<n;i++)
    {
        int left = (i==0) ? 0 : pre[i-1];
        int right = pre[n-1] - pre[i];
        if( left == right)
        {
            cout << i <<endl;
             return 0;
        }
        
    }
 
    
   
}