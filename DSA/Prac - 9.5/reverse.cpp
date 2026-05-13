#include<bits/stdc++.h>
using namespace std;

int main ()
{
    list<int> l;
    int val;

    // সঠিক কন্ডিশন: যতক্ষণ -1 না পাওয়া যায়
    while (cin >> val && val != -1) 
    {
       l.push_back(val);
    }

    // লিস্টটি রিভার্স করা
    l.reverse();

    // লিস্টের উপাদানগুলো প্রিন্ট করা
    for(int x : l)
    {
        cout << x << " "; // l এর বদলে x হবে
    }
    
    return 0;
}