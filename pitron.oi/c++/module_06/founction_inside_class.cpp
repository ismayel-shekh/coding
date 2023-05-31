#include<bits/stdc++.h>
using namespace std;
class parson{
    public:
    string name;
    int age;
    int marks1;
    int marks2;
    parson(string nm,int ag,int m1,int m2)
    {
        name =nm;
        age=ag;
        marks1=m1;
        marks2=m2;
    }
    void hello()
    {
        cout<<"hello and walcame";
    }
    int toral_marks()
    {
        return marks1+marks2;
    }
};
int main()
{
    parson king("ismayel",44,65,20);
    cout<<king.name<<" "<<king.age<<endl;
    cout<<king.toral_marks()<<endl;
    king.hello();
    return 0;
} 