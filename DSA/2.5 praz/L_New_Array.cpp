#include<bits/stdc++.h>
using namespace std;

vector<int> concate(vector<int> a, vector<int> b)
{
    vector<int> c;

    // আগে B ঢুকাই
    for(int i = 0; i < b.size(); i++)
    {
        c.push_back(b[i]);
    }

    // তারপর A ঢুকাই
    for(int i = 0; i < a.size(); i++)
    {
        c.push_back(a[i]);
    }

    return c;
}

int main()
{
    int n;
    cin >> n;

    vector<int> a(n), b(n);

    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < n; i++)
        cin >> b[i];

    vector<int> c = concate(a, b);

    for(int i = 0; i < c.size(); i++)
        cout << c[i] << " ";

    return 0;
}