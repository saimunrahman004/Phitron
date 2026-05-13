#include <iostream>
#include <cmath> // ceil() ফাংশন ব্যবহারের জন্য
using namespace std;

void solve() {
    int H, X, Y;
    cin >> H >> X >> Y;

    // ১টি স্পেশাল অ্যাটাক ব্যবহার করলাম
    int remaining_health = H - Y;
    int attacks = 1;

    // যদি হেলথ এখনো ০-এর বেশি থাকে
    if (remaining_health > 0) {
        // ceil ফাংশন ব্যবহার করে ভাগফলকে পরবর্তী পূর্ণসংখ্যায় নেওয়া
        // (double) দিয়ে টাইপ কাস্টিং করা হয়েছে যাতে ভাগফল দশমিক আসে
        int normal_attacks = ceil((double)remaining_health / X);
        attacks += normal_attacks;
    }

    cout << attacks << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}