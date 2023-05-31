#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    int cls;
    int roll;
    char section;
    char name[100];
    student(int c,int r,int s,char *n){
        roll=r;
        cls=c;
        section=s;
        strcpy(name,n);
    }

};
int main()
{
    char name[100]="ismayel";
    student *korim=new student(3,2,'m',name);
    char one[100]="hi";
    strcpy(korim->name,one);
    korim->roll=5;
    
    cout<<korim->name<<endl;
    cout<<korim->roll<<endl;
    cout<<korim->cls<<endl;
    cout<<korim->section<<endl;
}