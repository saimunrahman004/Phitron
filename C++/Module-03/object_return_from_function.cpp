#include<bits/stdc++.h>
using namespace std;

class student
{
   public :
   int roll;
   int cls;
   double gpa;

   student(int roll, int cls,double gpa)
   {
    this->roll = roll;
    this->cls = cls;
    this->gpa = gpa;
   }
};

student fun()
{
     student rahim(45,5,4.36);
     return rahim;
}

int main ()
{
    student obj = fun();
    

    cout << obj.roll <<" "<< obj.cls <<" "<<obj.gpa<<endl;
    
    return 0;
}