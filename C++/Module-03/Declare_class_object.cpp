#include<bits/stdc++.h>
using namespace std;

class student {
public:
    char name[100];
    int roll;
    double gpa;
};

int main () {
    student a, b;

    // ১ম ছাত্রের জন্য
    cin.getline(a.name, 100);
    cin >> a.roll >> a.gpa;
    
    cin.ignore(); // রোল/জিপিএ এর পরের 'Enter' পরিষ্কার করার জন্য

    // ২য় ছাত্রের জন্য
    cin.getline(b.name, 100);
    cin >> b.roll >> b.gpa;

    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    cout << b.name << " " << b.roll << " " << b.gpa << endl;

    return 0;
}