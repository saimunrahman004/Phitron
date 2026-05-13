// include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >>t;
//     while(t--)
//     {
//         int n;
//         cin >>n;
//         string s;
//         cin >>s;
//         bool visited[26] = {false};
//         int ballons = 0;
//         for(int i =0;i<n;i++)
//         {
//             char ch = s[i];
//             int idx = ch -'A';
//             if(visited[idx]==false)   //first time solved
//             {
//                ballons +=2;
//                visited[idx]= true;
//             }
//             else {
//                 ballons +=1;
//             }
           
//         }
//         cout << ballons <<endl;
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    bool visited[26] = {false};
    int balloons = 0;

    for (char ch : s) { // Range-based loop ব্যবহার করা সহজ
        int idx = ch - 'A';
        if (!visited[idx]) {
            balloons += 2;
            visited[idx] = true;
        } else {
            balloons += 1;
        }
    }
    cout << balloons << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve(); // logic আলাদা ফাংশনে রাখা ভালো প্র্যাকটিস
    }
    return 0;
}