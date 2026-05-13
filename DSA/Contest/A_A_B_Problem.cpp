#include<bits/stdc++.h>
using namespace std;
int main ()
{
   long long  int a,b;
    cin >> a >> b;
   long long  int d = a / b;
   long long int r = a% b;
    double e= (double)a/b;
    cout << d <<" "<< r <<" " << fixed<<  setprecision(5)<< e ;
   

    return 0;
}

