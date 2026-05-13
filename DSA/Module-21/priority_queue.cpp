#include<bits/stdc++.h>
using namespace std;
int main ()
{
    //max pq
    priority_queue<int>pq;
    pq.push(10);
    pq.push(5);
    pq.push(30);
    cout << pq.top() << endl;
    pq.push(2);
     cout << pq.top() << endl;
     pq.pop();
     pq.pop();
      cout << pq.top() << endl;
    return 0;
}

int main ()
{
    //min pq
    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(10);
    pq.push(5);
    pq.push(30);
    cout << pq.top() << endl;
    pq.push(2);
     cout << pq.top() << endl;
     pq.pop();
     pq.pop();
      cout << pq.top() << endl;
    return 0;
}