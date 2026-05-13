// Question: Make a class named Student. Write a program to take a positive integer
// N as input and make an Student array of size N.
// Student
// {
// name;
// roll;
// marks;
// }
// Your task is to sort the Students data according to the marks in descending order. If
// multiple students have the same marks then sort them according to the roll in
// ascending order as the roll will be unique.
// Note: name will not contain any spaces.


#include <bits/stdc++.h>
using namespace std;

// Student ক্লাস তৈরি
class Student {
public:
    string name;
    int roll;
    int marks;
};

// Custom Comparator ফাংশন
// এটি ঠিক করবে কিভাবে সর্টিং হবে
bool compare(Student a, Student b) {
    // যদি মার্কস সমান হয়, তবে রোল অনুযায়ী ছোট থেকে বড় (Ascending)
    if (a.marks == b.marks) {
        return a.roll < b.roll;
    }
    // অন্যথায় মার্কস অনুযায়ী বড় থেকে ছোট (Descending)
    else
    return a.marks > b.marks;
}

int main() {
    int n;
    cin >> n;

    // N সাইজের স্টুডেন্ট অ্যারে তৈরি
    Student a[n];

    // ইনপুট গ্রহণ
    for (int i = 0; i < n; i++) {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    // sort ফাংশন ব্যবহার (শুরু থেকে শেষ পর্যন্ত, সাথে কাস্টম কন্ডিশন)
    sort(a, a + n, compare);

    // আউটপুট প্রদর্শন
    for (int i = 0; i < n; i++) {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }

    return 0;
}