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
    char v[100]="ismayel";
    person *ismayel= new person(v,6.8,20);
    cout<<ismayel->name<<endl;
    cout<<ismayel->height<<endl;
    cout<<ismayel->age<<endl;
    return 0;
}