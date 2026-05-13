#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList;
    int q;
    cin >> q;

    while (q--)
    {
        int x, v;
        cin >> x >> v;

        if (x > myList.size())
        {
            cout << "Invalid" << endl;
        }
        else
        {
            // ১. ইনসার্ট করা
            auto it = next(myList.begin(), x);
            myList.insert(it, v);

            // ২. সামনে থেকে প্রিন্ট করা
            for (int val : myList)
            {
                cout << val << " ";
            }
            cout << endl;

            // ৩. লিস্টটি উল্টে দেওয়া
            myList.reverse();

            // ৪. উল্টো অবস্থায় প্রিন্ট করা (এখন এটা পেছন থেকে প্রিন্ট হচ্ছে)
            for (int val : myList)
            {
                cout << val << " ";
            }
            cout << endl;

            // ৫. লিস্টটিকে আবার উল্টে আগের জায়গায় ফিরিয়ে আনা (খুবই জরুরি)
            myList.reverse();
        }
    }

    return 0;
}