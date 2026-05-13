#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    map<string,int>mp;
    while (ss >> word) //nlogn
    {
        //cout << word<< endl;
        mp[word]++;             // logn
    }
    for(auto it = mp.begin(); it!=mp.end();it++)    //nlogn
    {
         cout << it->first<<" "<<it->second<<endl;  //logn
    }
    
    return 0;
}