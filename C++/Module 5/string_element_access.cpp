#include <iostream>

#include <string>

 

int main() {

 std::string s = "Hello, World!";

 

 // S[i] উদাহরণ

 std::cout << "স্ট্রিংয়ের ৭ম ইন্ডেক্সের উপাদান: " << s[7] << std::endl;

 // ব্যাখ্যা: এখানে s[7] স্ট্রিংয়ের ৭ম ইন্ডেক্সের উপাদান অ্যাক্সেস করবে, যা 'W'।

 

 // s.at(i) উদাহরণ

 std::cout << "স্ট্রিংয়ের ৪র্থ ইন্ডেক্সের উপাদান: " << s.at(4) << std::endl;

 // ব্যাখ্যা: s.at(4) স্ট্রিংয়ের ৪র্থ ইন্ডেক্সের উপাদান অ্যাক্সেস করবে, যা 'o'।

 

 // s.back() উদাহরণ

 std::cout << "স্ট্রিংয়ের শেষ উপাদান: " << s.back() << std::endl;

 // ব্যাখ্যা: s.back() স্ট্রিংয়ের শেষ উপাদান অ্যাক্সেস করবে, যা '!'।

 

 // s.front() উদাহরণ

 std::cout << "স্ট্রিংয়ের প্রথম উপাদান: " << s.front() << std::endl;

 // ব্যাখ্যা: s.front() স্ট্রিংয়ের প্রথম উপাদান অ্যাক্সেস করবে, যা 'H'।

 

 return 0;

}



#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    cin >> s;
    cout << s[4]<<endl;
    cout << s.at(0)<<endl;
    cout << s[s.size()-1] << endl;
    cout << s.back()<< endl;
    cout << s.front()<< endl;
    return 0;
}