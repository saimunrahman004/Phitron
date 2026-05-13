#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    string s;
    cin >> n >> s;
    int count_t=0, count_a = 0;
    for (int i = 0; i <n; i++)
    {
        if(s[i] == 'T') 
        count_t++;
        else count_a++;
    }
    if(count_t > count_a)
    cout << "T";
    else if(count_t < count_a)
    cout << "A";
    else
    {
        // ড্র হলে যে শেষ ম্যাচ জিতেছে সে হারবে, কারণ অন্যজন আগে টার্গেটে পৌঁছেছে
        if(s[n-1] == 'T')
        cout << "A";
        else
        cout << "T";
    }

    
    return 0;
}