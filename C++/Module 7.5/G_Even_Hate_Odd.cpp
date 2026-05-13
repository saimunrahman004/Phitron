#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int even_count = 0, odd_count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
              even_count ++;
            }
            else 
            {
                odd_count ++;
            }
        }
        if( n%2 ==1)
        {
            cout << -1 << endl;
            continue;
        }
        int total = n/2;
      
        cout << abs(even_count-total) << endl;
    }
 
    return 0;
}