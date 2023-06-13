#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    int roll;
};
int main()
{
    student a[5];
    for(int i=0;i<5;i++){
        getline(cin,a[i].name);
        cin>>a[i].roll;
        cin.ignore();
    }
    for(int i=0;i<4;i++){
        for(int j=i+1;j<5;j++){
            if(a[i].roll>a[j].roll){
                swap(a[i],a[j]);
            }
        }
    }
    for(int i=0;i<5;i++){
        cout<<a[i].name<<endl<<a[i].roll<<endl;
    }
    return 0;
}