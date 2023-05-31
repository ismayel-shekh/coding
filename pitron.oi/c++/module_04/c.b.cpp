#include<bits/stdc++.h>
using namespace std;
class hello{
    public:
    int age;
    char name[100];
    hello(int s,char *n){
        age=s;
        strcpy(name,n);
    }

};
hello fun()
{
    char x[100]="ismayel shekh";
    hello ismayel(20,x);
    return ismayel;
}
int main()
{
    hello ismayel=fun();
    cout<<ismayel.age;
    cout<<ismayel.name;
}
