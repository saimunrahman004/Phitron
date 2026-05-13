// brute_force
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, q;
//     cin >> n >> q;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     while (q--)
//     {
//         int x;
//         cin >> x;
//         int found = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if (a[i] == x)
//             {
//                 found = 1;
//             }
//         }
//         if(found == 1)
//         {
//             cout << "found\n";
//         }
//         else
//         {
//             cout << "not found\n";
//         }
//     }

//     return 0;
// }

// binary_solution
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    while (q--)
    {
        int val;
        cin >> val;
        int found = 0;
        int l = 0, r = n - 1;
        while (l <=r)
        {
            int mid = (l + r) / 2;
            if (a[mid] == val)
            {
                found = 1;
                break;
            }
            else if (a[mid] > val)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (found == 1)
        {
            cout << "found\n";
        }
        else
        {
            cout << "not found\n";
        }
    }

    return 0;
}