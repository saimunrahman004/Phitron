#include<bits/stdc++.h>
using namespace std;
vector<int>running_sum(vector<int> a)
{
    vector<int>b;
    int sum = 0;
    for (int i = 0; i < a.size(); i++)
    {
        sum += a[i];
        b.push_back(sum);
    }
    return b;
    
}
int main ()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    vector<int> b = running_sum(a);
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}