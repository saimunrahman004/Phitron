#include<bits/stdc++.h>
using namespace std;

class student
{
   public :
   int roll;
   int cls;
   double gpa;

   student(int r, int c,double g)
   {
    roll = r;
    cls = c;
    gpa = g;
   }
};

int main ()
{
    student rahim(45,5,4.36);
    student kahim(40,5,4.96);

    cout << rahim.roll <<" "<< rahim.cls <<" "<<rahim.gpa<<endl;
    cout << kahim.roll <<" "<< kahim.cls <<" "<<kahim.gpa<<endl;
    return 0;
}