#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string s = "Hello world!";

    // 1st way: স্ট্রিং সরাসরি Constructor দিয়ে stringstream তৈরি
    stringstream ss(s);

    // 2nd way: স্ট্রিং "<<" অপারেটর দিয়ে stringstream তৈরি
    // stringstream ss;
    // ss << s;

    string word;

    ss >> word;  // প্রথম শব্দটা পড়া

    cout << word << endl;  // প্রিন্ট করা

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    getline(cin,s);
    cout << s << endl;
    stringstream ss(s);
    string word;

    while(ss>> word)
    {
        cout << word << endl;
    }

    return 0;
}