#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        char ch[6];
        for (int i = 0; i <6; i++)
        {
            cin >> ch[i];
        }
        bool hattrik = false;
        for (int i = 0; i <6; i++)
        {
            if(ch[i] == 'W' && ch[i+1]=='W' && ch[i+2] == 'W' )
            hattrik = true;
        }
        if(hattrik == true)
        cout << "YES\n";
        else
        cout << "NO\n";
        
    }
    
    return 0;
}