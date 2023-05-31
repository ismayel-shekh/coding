#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    char name[100];
    int roll;
    int cls;
    char section;
    student(int r,int c,int s,char *nm)
    {
        roll=r;
        cls=c;
        section=s;
        strcpy(name,nm);
    }
};
student fun()
{
    char name[100]="rohim king";
    student rohim(17,9,'A',name);
    return rohim;
}
int main()
{
    student rohim =fun();
    cout<<rohim.roll<<endl;
    cout<<rohim.cls<<endl;
    cout<<rohim.section<<endl;
    cout<<rohim.name<<endl;

}