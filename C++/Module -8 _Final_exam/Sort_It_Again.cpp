#include <bits/stdc++.h>
using namespace std;

class student
{
    public:
    string name;
    int cls;
    char sec;
    int id;
    int math_marks, english_marks;
};

bool cmp(student l, student r)
{
    if(l.english_marks> r.english_marks)
    {
        return true;
    }
    else if (l.english_marks<r.english_marks)
    {
        return false;
    }
    else 
    {
        if(l.math_marks > r.math_marks)
        {
            return true;
        }
        else if (l.math_marks < r.math_marks)
        {
            return false;
        }
        else{
            return l.id < r.id;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    student a[n];
    for(int i= 0;i<n;i++)
    {
        cin >> a[i].name>>a[i].cls>>a[i].sec>>a[i].id>>a[i].math_marks>>a[i].english_marks;
    }
    sort(a,a+n,cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].sec << " " << a[i].id << " " << a[i].math_marks << " " << a[i].english_marks << endl;
    } 

    return 0;
}