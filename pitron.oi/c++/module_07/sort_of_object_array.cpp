#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    int cls;
};
bool cmd(student a,student b){
    if(a.cls <b.cls) return true;
    else return false;
}
int main()
{

    student a[5];
    for(int i=0;i<5;i++){
        getline(cin,a[i].name);
        cin>>a[i].cls;
        cin.ignore();
    }
    sort(a,a+5,cmd);
    for(int i=0;i<5;i++){
        cout<<a[i].name<<endl<<a[i].cls<<endl;
    }
    return 0;
}