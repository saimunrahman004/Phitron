#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x,y;
    cin >> x >> y;
    if( x > y)
    cout << "New";
    else if (x < y)
    cout << "Old";
    else 
    cout << "Same"; 
     return 0;
}