#include<bits/stdc++.h>
using namespace std;
class Student 
{
    public:
    char name[100];
    int roll;
    int cls;
    char section;
    Student(int r,char s,int c,char *nam)
    {
        roll=r;
        section=s;
        cls=c;
        strcpy(name,nam);
    }
};

Student fun()
{
    char name[100]="rahim mia";
   Student r(9 ,'A',7,name);
   return r;
}

int main()
{
 
   Student rahim=fun();

    cout<<rahim.roll<<endl;
    cout<<rahim.name<<endl;
    cout<<rahim.section<<endl;
    cout<<rahim.cls<<endl;
    return 0;
}