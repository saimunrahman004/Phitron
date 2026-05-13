#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    vector<int>freq(n+1,0);
    for(int i = 0; i< 4*n-1;i++)
    {
        int card_num; cin >> card_num;
        freq[card_num]++;
    }
    for (int i = 0; i <= n; i++)
    {
        if(freq[i] == 3)
        {
            cout << i << endl;
            break;
        }
    }
    
    return 0;
}