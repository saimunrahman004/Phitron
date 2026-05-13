// Solve using max function
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int mx = INT_MIN; // এটি C/C++ এ int ডেটা টাইপ যে সবচেয়ে ছোট (minimum)
                      // মান ধারণ করতে পারে, সেই মানকে বোঝায়।
 
    for (int i = 0; i < n; i++)
    {
        mx = max(arr[i], mx);
    }
 
    cout << mx;
    return 0;
}
