// Question: Make a class named Student. Write a program to take a positive integer
// N as input and make an Student array of size N.
// Student
// {
// name;
// roll;
// marks;
// }
// Your task is to reverse the array and print the array of Student.
// Note: name will not contain any spaces.


#include <bits/stdc++.h>
using namespace std;

// Student ক্লাস ডিক্লেয়ারেশন
class Student {
public:
    string name;
    int roll;
    int marks;
};

int main() {
    int n;
    // এন (N) ইনপুট নেওয়া
   cin >> n;

    // Student অবজেক্টের অ্যারে তৈরি
    Student a[n];

    // লুপের মাধ্যমে সব স্টুডেন্টের তথ্য ইনপুট নেওয়া
    for (int i = 0; i < n; i++) {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    // অ্যারে রিভার্স করার জন্য বিল্ট-ইন ফাংশন
    // reverse(শুরু, শেষ)
    reverse(a, a + n);

    // রিভার্স করা অ্যারে প্রিন্ট করা
    for (int i = 0; i < n; i++) {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }

    return 0;
}