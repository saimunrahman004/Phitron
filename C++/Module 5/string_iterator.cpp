#include<bits/stdc++.h>

using namespace std;

 

int main() {

 string s;

 cin >> s;

 

 // for(int i=0;i<s.size();i++)

 // {

 // cout<<s[i]<<endl;

 // }

 // cout<<*s.begin()<<endl;

 // cout<<*(s.end()-1)<<endl;

 

 for(auto it = s.begin(); it < s.end(); it++) {

 cout << *it << endl;

 }

 

 return 0;

}


#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "hello";

    // 1️⃣ Normal iteration (print each character)
    cout << "Normal iteration:" << endl;
    for(auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl << endl;

    // 2️⃣ First and Last character
    cout << "First character: ";
    cout << *s.begin() << endl;

    cout << "Last character: ";
    cout << *(s.end() - 1) << endl << endl;

    // 3️⃣ Reverse iteration
    cout << "Reverse iteration:" << endl;
    for(auto it = s.rbegin(); it != s.rend(); it++)
    {
        cout << *it << " ";
    }
    cout << endl << endl;

    // 4️⃣ Modify string using iterator
    cout << "Uppercase string:" << endl;
    for(auto it = s.begin(); it != s.end(); it++)
    {
        *it = toupper(*it);
    }
    cout << s << endl << endl;

    // 5️⃣ Iterator with vector
    vector<int> v = {10, 20, 30, 40};

    cout << "Vector iteration:" << endl;
    for(auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}