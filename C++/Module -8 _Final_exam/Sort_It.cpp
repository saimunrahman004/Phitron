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
    int total_l = l.math_marks + l.english_marks;
    int total_r = r.math_marks + r.english_marks;

    if (total_l > total_r)
    {
        return true;
    }
    else if (total_l < total_r)
    {
        return false;
    }
    else
    {
        if (l.id < r.id)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
int main()
{

    int n;
    cin >> n;
    student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].sec >> a[i].id >> a[i].math_marks >> a[i].english_marks;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].sec << " " << a[i].id << " " << a[i].math_marks << " " << a[i].english_marks << endl;
    }

    return 0;
}