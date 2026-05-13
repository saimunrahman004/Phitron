#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;

    queue<int> q1;
    // ইনপুট নিয়ে প্রথম কিউ-তে রাখা
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        q1.push(x);
    }

    stack<int> s;
    // কিউ থেকে সব ডাটা স্ট্যাকে নেওয়া (এতে ডাটা উল্টে যাবে)
    while (!q1.empty()) {
        s.push(q1.front());
        q1.pop();
    }

    queue<int> q2;
    // স্ট্যাক থেকে ডাটা বের করে দ্বিতীয় কিউ-তে রাখা
    while (!s.empty()) {
        q2.push(s.top());
        s.pop();
    }

    // নতুন কিউ প্রিন্ট করা
    while (!q2.empty()) {
        cout << q2.front() << " ";
        q2.pop();
    }

    return 0;
}