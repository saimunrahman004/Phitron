#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int sum = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int ans = a[i] + a[j] + j - i;
                if (ans < sum)
                {
                    sum = ans;
                }
            }
        }
        cout << sum << endl;
    }
 
    return 0;
}