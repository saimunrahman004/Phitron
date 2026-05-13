#include<bits/stdc++.h>
using namespace std;
class crickter
{
    public :
    string country;
    int jercy;
    crickter(string country,int jercy)
    {
        this->country = country;
        this->jercy = jercy;
    }
};

int main ()
{
   crickter * dhoni = new crickter("India",100);
   crickter * kholi = new crickter("India",18);
   
   kholi->country = dhoni->country;
   kholi->jercy = dhoni->jercy;
   delete dhoni ;

   cout << kholi->country <<" " << kholi->jercy;
  
    return 0;
}