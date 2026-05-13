//Gemini
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     // ১. প্রথম লাইন প্রিন্ট করা (১ থেকে n)
//     for (int i = 1; i <= n; i++) {
//         cout << i;
//     }
//     cout << endl;

//     // ২. মাঝখানের লাইনগুলো (২ থেকে n-1 পর্যন্ত)
//     for (int i = 2; i < n; i++) {
//         // লাইনের শুরুর সংখ্যা
//         cout << i;

//         // মাঝখানের স্পেস (n-2 টি স্পেস লাগবে)
//         for (int j = 1; j <= n - 2; j++) {
//             cout << " ";
//         }

//         // লাইনের শেষের সংখ্যা (যা n - i + 1 এর সমান)
//         // লক্ষ্য করো: ৫ এর ক্ষেত্রে ২য় লাইনে শেষে ৪ বসে (৫-২+১ = ৪)
//         cout << n - i + 1 << endl;
//     }

//     // ৩. শেষ লাইন প্রিন্ট করা (n থেকে ১ পর্যন্ত উল্টো)
//     if (n > 1) { // n=1 হলে যেন দুইবার প্রিন্ট না হয়
//         for (int i = n; i >= 1; i--) {
//             cout << i;
//         }
//         cout << endl;
//     }

//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     if (n == 1)
//     {
//         cout << "1" << endl;
//     }
//     else if (n == 2)
//     {
//         cout << "12\n21" << endl;
//     }
//     else if (n == 3)
//     {
//         cout << "123\n2 2\n321" << endl;
//     }
//     else if (n == 4)
//     {
//         cout << "1234\n2  3\n3  2\n4321" << endl;
//     }
//     else if (n == 5)
//     {
//         cout << "12345\n2   4\n3   3\n4   2\n54321" << endl;
//     }
//     else if (n == 6)
//     {
//         cout << "123456\n2    5\n3    4\n4    3\n5    2\n654321" << endl;
//     }
//     else if (n == 7)
//     {
//         cout << "1234567\n2     6\n3     5\n4     4\n5     3\n6     2\n7654321" << endl;
//     }
//     else if (n == 8)
//     {
//         cout << "12345678\n2      7\n3      6\n4      5\n5      4\n6      3\n7      2\n87654321" << endl;
//     }
//     else if (n == 9)
//     {
//         cout << "123456789\n2       8\n3       7\n4       6\n5       5\n6       4\n7       3\n8       2\n987654321" << endl;
//     }
//     return 0;
// }





//Solutoin using loop
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // if (n == 1)
    // {
    //     cout << "1" << endl;
    //     return 0;
    // }
    
    // first row print 1 to n
    for (int i = 1; i <= n; i++)
    {
        cout << i;
    }
    cout << endl;

    // 2 row to n-1 row print
    for (int r = 2; r < n ; r++)
    {
        // first column value
        cout << r;
        // space print
        for (int s = 1; s <= n - 2; s++)
        {
            cout << " ";
        }
        // last column value
        cout << n - r + 1 << endl;
    }

    // last row print n to 1
    if (n != 1)
    {
        for (int i = n; i >= 1; i--)
        {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}