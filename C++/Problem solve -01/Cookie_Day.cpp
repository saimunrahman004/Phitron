#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr1[n];
        for (int i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        int ans=INT_MAX;
        sort (arr1, arr1+n);
        for (int i=0; i<n;i++){
            if (arr1[i]>=k){
                int rem=arr1[i]%k;
                ans=min(ans,rem);
            }            
        }
        if (ans==INT_MAX) {
            cout << "-1" << endl;
        } else {
            cout << ans<< endl;
        }
    }
    return 0;
}
