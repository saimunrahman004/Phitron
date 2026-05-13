#include <iostream>

#include <string>

 

int main() {

 std::string s = "Hello, World!";

 std::string t = " C++";

 

 // s+= উদাহরণ

 s += t;

 std::cout << "s+= t এর পর: " << s << std::endl;

 // ব্যাখ্যা: s += t এর মাধ্যমে s এর শেষে t যোগ করা হয়। ফলাফল "Hello, World! C++"।

 

 // s.append() উদাহরণ

 s.append(" Programming");

 std::cout << "s.append() এর পর: " << s << std::endl;

 // ব্যাখ্যা: s.append(" Programming") এর মাধ্যমে s এর শেষে " Programming" যোগ করা হয়। ফলাফল "Hello, World! C++ Programming"।

 

 // s.push_back() উদাহরণ

 s.push_back('!');

 std::cout << "s.push_back() এর পর: " << s << std::endl;

 // ব্যাখ্যা: s.push_back('!') এর মাধ্যমে s এর শেষে '!' যোগ করা হয়। ফলাফল "Hello, World! C++ Programming!"।

 

 // s.pop_back() উদাহরণ

 s.pop_back();

 std::cout << "s.pop_back() এর পর: " << s << std::endl;

 // ব্যাখ্যা: s.pop_back() এর মাধ্যমে s এর শেষের ক্যারেক্টারটি মুছে ফেলা হয়। ফলাফল "Hello, World! C++ Programming"।

 

 // s= উদাহরণ

 s = "New String";

 std::cout << "s= এর পর: " << s << std::endl;

 // ব্যাখ্যা: s = "New String" এর মাধ্যমে s এ নতুন স্ট্রিং "New String" এ অ্যাসাইন করা হয়। 

 

 // s.assign() উদাহরণ

 s.assign("Assigned String");

 std::cout << "s.assign() এর পর: " << s << std::endl;

 // ব্যাখ্যা: s.assign("Assigned String") এর মাধ্যমে s কে "Assigned String" এ অ্যাসাইন করা হয়।

 

 // s.erase() উদাহরণ

 s.erase(8, 6);

 std::cout << "s.erase() এর পর: " << s << std::endl;

 // ব্যাখ্যা: s.erase(8, 6) এর মাধ্যমে s এর ৮ম ইন্ডেক্স থেকে শুরু করে ৬টি ক্যারেক্টার মুছে ফেলা হয়। ফলাফল "Assignedg"।

 

 // s.replace(position,length,new_string) উদাহরণ

 s.replace(0, 7, "Replaced");

 std::cout << "s.replace() এর পর: " << s << std::endl;

 // ব্যাখ্যা: s.replace(0, 7, "Replaced") এর মাধ্যমে s এর ০ম ইন্ডেক্স থেকে ৭টি ক্যারেক্টার "Replaced" দিয়ে পরিবর্তন করা হয়। ফলাফল "Replaceddg"।

 

 // s.insert(position,new_streing) উদাহরণ

 s.insert(8, " String");

 std::cout << "s.insert() এর পর: " << s << std::endl;

 // ব্যাখ্যা: s.insert(8, " String") এর মাধ্যমে s এর ৮ম ইন্ডেক্সে " String" যোগ করা হয়। ফলাফল "Replaced Stringdg"।

 

 return 0;

}

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s = "Hello";
    // s +='A';
    // s.append()
    cout << s << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "I love Java";

    s.replace(7, 4, "C++");

    cout << s << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "I C++";

    s.insert(2, "love ");

    cout << s << endl;

    return 0;
}