#include<bits/stdc++.h>

using namespace std;

 

int main() {

 string s;

 getline(cin, s);

 cout << s << endl;

 return 0;

}
#include <iostream>
#include <string> // string ব্যবহারের জন্য
using namespace std;

int main() {
    string fullName;
    cout << "Enter your full name: ";
    
    // cin এর পরিবর্তে getline ব্যবহার
    getline(cin, fullName); 
    
    cout << "Hello, " << fullName << endl;
    return 0;
}