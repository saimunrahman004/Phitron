#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    // পুরো বাক্যটি ইনপুট নেওয়ার জন্য getline
    getline(cin, s);

    string x;
    // যে শব্দটি খুঁজবেন সেটি ইনপুট
    cin >> x;

    stringstream ss(s);
    string word;
    int count = 0;

    // বাক্য থেকে প্রতিটি শব্দ আলাদা করে word-এ রাখা
    while (ss >> word) {
        if (word == x) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}