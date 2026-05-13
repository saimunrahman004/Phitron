#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> l;
    int val;

    // ইনপুট নেওয়া
    while (cin >> val && val != -1) {
        l.push_back(val);
    }

    // লিস্টটি ছোট থেকে বড় ক্রমে সাজানো
    l.sort();

    // সাজানো লিস্টটি প্রিন্ট করা
    for (int x : l) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}