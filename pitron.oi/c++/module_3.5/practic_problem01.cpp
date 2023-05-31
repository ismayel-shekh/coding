#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    char name[100];
	int roll;
	int section;
	int math_marks;
	int cls;
    student(int r,int c,int s,int m,char *n){
    strcpy(name,n);
	roll=r;
	section=s;
	math_marks=m;
	cls=c;
    }
};
int main()
{
    char ol[100]="ifat";
    student ifat(10,2,'A',50,ol);
    char oi[100]="ismayel";
    student ismayl(11,2,'A',99,oi);
    char sk[100]="sakil";
    student sakil(12,2,'A',32,sk);
    int x=max(ifat.math_marks, max(sakil.math_marks,ismayl.math_marks));
    if(x==sakil.math_marks) cout<<sakil.name;
    else if(x==ismayl.math_marks) cout<<ismayl.name;
    else cout<<ifat.name;
    return 0;
}