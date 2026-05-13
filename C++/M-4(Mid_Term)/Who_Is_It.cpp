#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int id1,id2,id3;
        int mark1,mark2,mark3;
        string n1,n2,n3,sec1,sec2,sec3;

        cin >>id1>>n1>>sec1>>mark1;
        cin >>id2>>n2>>sec2>>mark2;
        cin >>id3>>n3>>sec3>>mark3;

        int chmp_id = id1 , chmp_marks = mark1;
        string chmp_name = n1, chmp_sec = sec1;

        if(mark2 > chmp_marks)
        {
            chmp_id = id2;
            chmp_name = n2;
            chmp_sec = sec2;
            chmp_marks = mark2;
        }
        else if (mark2 == chmp_marks && id2 < chmp_id)
        {
            chmp_id = id2;
            chmp_name = n2;
            chmp_sec = sec2;
            chmp_marks = mark2;
        }
        if(mark3 > chmp_marks)
        {
            chmp_id = id3;
            chmp_name = n3;
            chmp_sec = sec3;
            chmp_marks = mark3;
        }
         else if (mark3== chmp_marks && id3 < chmp_id)
        {
             chmp_id = id3;
            chmp_name = n3;
            chmp_sec = sec3;
            chmp_marks = mark3;
        }
        cout << chmp_id << " "<< chmp_name <<" "<< chmp_sec <<" "<< chmp_marks<<endl;
    }
    return 0;
}