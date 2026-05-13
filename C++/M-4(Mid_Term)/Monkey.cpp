#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while (getline(cin, s))   // EOF পর্যন্ত ইনপুট
    {
        string letters = "";

        // space বাদ দিয়ে শুধু অক্ষর রাখি
        for (char c : s)
        {
            if (c >= 'a' && c <= 'z')
            {
                letters += c;
            }
        }

        // alphabetic order এ সাজানো
        sort(letters.begin(), letters.end());

        cout << letters << endl;
    }

    return 0;
}