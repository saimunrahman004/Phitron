#include<bits/stdc++.h>
using namespace std;
int main ()
{
    map<string,int>mp; // logN
    mp["Tamim"] = 5 ;
    mp["rohim"] = 500;
    mp["shamim"]= 25;
    // for(auto it = mp.begin(); it!= mp.end();it++) //O(NlogN)
    // {
    //     cout << it->first<<" "<<it->second<<endl;//logN
    // }

    if(mp.count("labib"))
        cout<< "Ache";
    else    cout<< "nai";
    return 0;
}