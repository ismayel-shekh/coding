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
// student fun()
// {
//     char name[100]="hello";
//     student r(5,7,'A',name);
//     return r;
// }
int main()
{
    // student r(100,5000,'A',"king");//secent type
    // r.cls=100;
    // r.roll=1000;
    // r.section='A';
    // char nm[100]="king is back";
    // strcpy(r.name,nm);
    // student k=fun();//thard type
    char name[100]="ismayel";
    // student rorim(3,2,'B',name);
    student *korim=new student(3,2,'m',name);
    // korim->name="hi";
    korim->roll=5;
    //simple way korim->cls
    
    cout<<korim->name<<endl;
    cout<<korim->roll<<endl;
    cout<<korim->cls<<endl;
    cout<<korim->section<<endl;
    delete korim;    //delate an object
    // cout<<(*korim).name<<endl;
    // cout<<(*korim).roll<<endl;
    // cout<<(*korim).cls<<endl;
    // cout<<(*korim).section<<endl;
    // return 0;
}