#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    int roll;
    int cal;
    char section;
    char name[100];
        student(int r,int c,int s,char *n){
            roll=r;
            cal=c;
            section=s;
            strcpy(name,n);
        }
        

};
student fun(){
    char nm[100]="king is back";
    student korim(11,3,'b',nm);
    return korim;
}
int main()
{
    char nm[100]="yes bro";
    student *rohim=new student(20,3,'B',nm);
        // korim.roll=100;
        // korim.cal=20;
        // korim.section='A';
        // char n[100]="ismayel";
        // strcpy(korim.name,n);
        cout<<(*rohim).name;
        //sort taknic
        cout<<rohim->name;
}