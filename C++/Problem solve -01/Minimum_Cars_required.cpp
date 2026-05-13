#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        float need_car = (float) n/4;
        cout << ceil(need_car) << endl;

    }
    return 0;
}