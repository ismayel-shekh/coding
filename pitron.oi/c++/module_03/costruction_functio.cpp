#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    int roll;
    int cls;
    char section;
    char name[100];
    student(int r,int c,char s,char *n){
        roll=r;
        cls=c;
        section=s;
        strcpy(name,n);

    }
};
int main()
{

    student rohim(10,6,'A',"king");
    student korim(20,7,'x',"back");
    cout<<korim.roll<<endl;
    cout<<korim.cls<<endl;
    cout<<korim.section<<endl;
    cout<<korim.name<<endl;
    cout<<"----------------------------------"<<endl;

    cout<<rohim.roll<<endl;
    cout<<rohim.cls<<endl;
    cout<<rohim.section<<endl;
    cout<<rohim.name<<endl;
}