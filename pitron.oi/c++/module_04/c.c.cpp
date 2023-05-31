#include<bits/stdc++.h>
using namespace std;
class person{
    public:
    char name[100];
    float height;
    int age;
    person(char *nl,float h,int g)
    {
        strcpy(name,nl);
        height=h;
        age=g;
    }
};
int main()
{
    char v[100]="ismayel shekh";
    person ismayel(v,6.8,20);
    char k[100]="korim khan";
    person korim(k,5.9,100);
    if(ismayel.age>korim.age){
        cout<<ismayel.name;
    }
    else{
        cout<<korim.name;
    }

    return 0;
}