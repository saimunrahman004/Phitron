#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<long long> freq(26, 0);

    // frequency count
    for(char ch : s)
    {
        freq[ch - 'a']++;
    }

    // print in ascending order
    for(int i = 0; i < 26; i++)
    {
        if(freq[i] > 0)
        {
            cout << char(i + 'a') << " : " << freq[i] << endl;
        }
    }

    return 0;
}