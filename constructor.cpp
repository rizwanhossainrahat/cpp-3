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
    Student rahim(15,'A',5,"rahim mia");
    Student fahim(14,'d',7,"fahim ami");
    cout<<fahim.roll<<endl;
    cout<<fahim.cls<<endl;
    cout<<fahim.name<<endl;
    cout<<fahim.section<<endl;
   
    return 0;
}