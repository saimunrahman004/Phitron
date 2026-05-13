#include<bits/stdc++.h>
using namespace std;
int main ()
{
    list<int> l = {10,20,300,40,40,99,60,70,30,40,5,1,99};
    //l.remove(40);

    //l.sort();
    // l.sort(greater<int>());

    //l.unique();
    l.reverse();

    for(int val : l)
    {
        cout << val << endl;
    }
    return 0;
}