#include<bits/stdc++.h>
using namespace std;
class Student 
{
    public:
    char name[100];
    int roll;
    int cls;
    char section;
};
int main()
{
    Student rahim;
    rahim.roll=30;
    rahim.cls=5;
    rahim.section='A';
    char nm[100]="rahim shaheb";
    strcpy(rahim.name,nm);

    Student fahim;
    fahim.roll=25;
    fahim.cls=3;
    fahim.section='B';
    char nam1[100]=" fahim molla";
    strcpy(fahim.name,nam1);

    cout<<rahim.roll;
    return 0;
}