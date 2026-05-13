#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int cnt = 0;

    // প্রতিটা element এর জন্য চেক
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a[j] == a[i] + 1)
            {
                cnt++;
                break;   // একবার পেলেই যথেষ্ট
            }
        }
    }

    cout << cnt << endl;

    return 0;
}