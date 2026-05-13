#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A,B,C;
    char S,Q;
    cin>>A>>S>>B>>Q>>C;
    int ans;
    
    
    if (S == '+') {
       ans = A + B;
    } else if (S == '-') {
        ans  = A - B;
    } else if (S == '*') {
       ans = A * B;
    }
    
    if (ans == C) {
        cout << "Yes" << endl;
    } else {
        cout << ans << endl;
    }
    
    return 0;
}