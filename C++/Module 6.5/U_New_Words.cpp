#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int e=0,g=0,y=0,p=0,t=0;
    for ( char c : s)
    {
        if(c=='E'|| c=='e')
        {
            e++;
        }
        if(c=='G'|| c=='g')
        {
            g++;
        }
        if(c=='Y'|| c=='y')
        {
            y++;
        }
        if(c=='P'|| c=='p')
        {
            p++;
        }
        if(c=='T'|| c=='t')
        {
            t++;
        }
    }
    cout << min({e,g,y,p,t})<< endl;
    return 0;
}