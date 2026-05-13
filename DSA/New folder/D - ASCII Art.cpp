#include <iostream>
#include <vector>

using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    for (int i = 0; i < H; i++) 
    {
        string row = "";
        for (int j = 0; j < W; j++)
         {
            int a;
            cin >> a;
            if (a == 0) {
                row += '.';
            } else {
                // ১ হলে A, ২ হলে B... এই লজিকে ক্যারেক্টার বের করা
                char c = 'A' + (a - 1);
                row += c;
            }
        }
        cout << row << endl; // প্রতি রো শেষে প্রিন্ট
    }

    return 0;
}



