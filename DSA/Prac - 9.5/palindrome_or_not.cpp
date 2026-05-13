#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> l1;
    int val;

    // ইনপুট নেওয়া
    while (cin >> val && val != -1) {
        l1.push_back(val);
    }

    // লিস্টটি অন্য একটি লিস্টে কপি করা
    list<int> l2 = l1;

    // দ্বিতীয় লিস্টটি রিভার্স করা
    l2.reverse();

    // দুটি লিস্ট তুলনা করা
    if (l1 == l2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}