// STL List (All problem solve using STL List)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l, l2;
    int val;
    while (cin >> val && val != -1)
    {
        l.push_back(val);
    }
    while (cin >> val && val != -1)
    {
        l2.push_back(val);
    }
    // STL list-এ সরাসরি '==' অপারেটর দিয়ে দুটি লিস্ট তুলনা করা যায়
    if (l == l2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}