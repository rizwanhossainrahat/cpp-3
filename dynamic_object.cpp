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
int main()
{
        char name[100]="rahim uddin";
   Student* rahim=new Student(9,'A',10,name);

    // cout<<(*rahim).name<<endl;
    // cout<<(*rahim).roll<<endl;
    // cout<<(*rahim).section<<endl;
    // cout<<(*rahim).cls<<endl;

    //shortcut way
    //arow sign use ->
    //(*rahim).=rahim->

     cout<<rahim->name<<endl;
    cout<<rahim->roll<<endl;
    cout<<rahim->section<<endl;
    cout<<rahim->cls<<endl;

    //delete an object
    delete rahim;

     cout<<rahim->name<<endl;
    cout<<rahim->roll<<endl;
    cout<<rahim->section<<endl;
    cout<<rahim->cls<<endl;
    return 0;
}