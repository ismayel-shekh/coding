#include<bits/stdc++.h>
using namespace std;
class king{
    public:
    string name;
    int age;
    king(string name,int age){
        this->name=name;
        this->age=age;
    }
    // king fun(){
    //     cout<<"assi ra vhi asi";
    // }
};
int main()
{
    king* ismayel=new king("King",20);
    king* ifat=new king("lion",17);
    *ismayel=*ifat;
    delete ifat;
    cout<<ismayel->name<<" "<<ismayel->age<<endl;
    cout<<ifat->name<<" "<<ifat->age<<endl;

    return 0;
}