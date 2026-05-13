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

student * fun()
{
     student *rahim= new student(45,5,4.36);
     
     return rahim;
}

int main ()
{
    student * p = fun();
    

    cout << p->roll <<" "<< p->cls <<" "<<p->gpa<<endl;
    
    return 0;
}
// output e grabage asbe