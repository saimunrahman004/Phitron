#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> s(8);
    for (int i = 0; i < 8; i++) {
        cin >> s[i];
    }

    for (int i = 0; i < 8; i++) { // রো বরাবর লুপ (ওপর থেকে নিচে)
        for (int j = 0; j < 8; j++) { // কলাম বরাবর লুপ (বাম থেকে ডানে)
            if (s[i][j] == '*') {
                // কলাম বের করা: ০ ইনডেক্স হলে 'a', ১ হলে 'b'...
                char column = 'a' + j;
                
                // রো বের করা: i=0 হলে ৮, i=7 হলে ১
                int row = 8 - i;
                
                cout << column << row << endl;
                return 0; // উত্তর পেয়ে গেলে প্রোগ্রাম শেষ
            }
        }
    }

    return 0;
}