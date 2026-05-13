#include<bits/stdc++.h>
using namespace std;
class student
{
    public :
        string name;
        int roll;
        int marks;
        student(string name,int roll,int marks)
        {
            this->name = name;
            this->roll = roll;
            this->marks = marks;
        }
};
class cmp
{
    public :
    bool operator()(student l, student r)
    {
        if(l.marks > r.marks)
            return true;
        else if(l.marks < r.marks)
            return false;
        else
        {
            return l.roll > r.roll;
        }
    }
};

int main ()
{
    priority_queue<student,vector<student>,cmp>pq ;
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll;
        int marks;
        
        cin >> name >>roll >> marks;
        student obj(name,roll,marks);
        pq.push(obj);
    }
    // আউটপুট দেখার জন্য একটি লুপ
   while(!pq.empty()) 
   {
        student top = pq.top();
        cout << top.name << " " << top.roll << " " << top.marks << endl;
        pq.pop();
    }

    return 0;
}