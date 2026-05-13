#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int roll;
    int math;
    int english;

    student(string name, int roll, int math, int english)
    {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }
    void total()
    {
        cout << "Total marks of " << name << "=" << math - english << endl;
    }
};

int main()
{
    student sakib("Sakib Ahmed", 23, 85, 96);
    sakib.total();
    student rakib("Rakib Ahmed", 20, 96, 87);
    rakib.total();
    return 0;
}