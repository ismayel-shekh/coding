#include<bits/stdc++.h>
using namespace std;
class person{
    public:
    string name;
    int age;
    person(string name,int age){
    this->name=name;
    this->age=age;
    }
    void hello()
    {
        cout<<"hello"<<endl;
    }
};
int main()
{
    person ismayel("Rakib Ahsan",24);
    cout<<ismayel.name<<" "<<ismayel.age<<endl;
    return 0;
}