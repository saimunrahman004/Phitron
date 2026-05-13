#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<long long> A(N);

    for(int i = 0; i < N; i++)
        cin >> A[i];

    // reverse print
    for(int i = N - 1; i >= 0; i--)
        cout << A[i] << " ";

    return 0;
}