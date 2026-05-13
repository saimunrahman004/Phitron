#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int day;
    cin >> day;
    switch (day)
    {
    case1:
       cout << "Saturday\n"; // if(day ==1)
        break;

    case 2:
       cout << "Sunday\n"; // if(day ==2)
        break;
    case 3:
       cout << "Monday\n";
        break;
    case 4:
       cout << "Tuesday\n";
        break;
    case 5:
       cout << "Wednesday\n";
        break;
    case 6:
       cout << "Thusday\n";
        break;
    
    case 7:
       cout << "Friday\n";
        break;

    default:
       cout << "invalid";
        break;
    }
    return 0;
}