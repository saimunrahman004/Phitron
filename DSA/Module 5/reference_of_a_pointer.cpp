// #include<bits/stdc++.h>
// using namespace std;

// void fun(int * p)
// {
//     *p = 100;
//     cout << "IN FUNCTIOn :" << *p<<endl;
// }
// int main ()
// {
//     int x = 10;
//     int * p = &x;
//     fun(p);
//     cout << "MAIN FUNCTIOn :" << *p<<endl;
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// void fun(int * p)
// {
//     int y = 250;
//     p = &y;
//     cout << "IN FUNCTIOn :" << *p<<endl;
// }
// int main ()
// {
//     int x = 10;
//     int * p = &x;
//     fun(p);
//     cout << "MAIN FUNCTIOn :" << *p<<endl;
//     return 0;
// }





#include<bits/stdc++.h>
using namespace std;

void fun(int * &p)
{
    
    p = NULL;
    cout << "IN FUNCTIOn :" << &p<<endl;
}
int main ()
{
    int x = 10;
    int * p = &x;
    fun(p);
    cout << "MAIN FUNCTIOn :" << &p<<endl;
    return 0;
}