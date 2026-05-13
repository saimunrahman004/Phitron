#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    cin >> s;

    vector<int>freq(26,0);
    for(char c : s)
    {
        freq[c - 'a'] ++;
    }
   int found = 0;
    for(char c : s)
    {
        if(freq[c-'a'] == 1)
        {
            cout << c << endl;
            found = 1;
            break;
        }
    }
    if ( found == 0)
    {
        cout << -1;
    }
    return 0;
}