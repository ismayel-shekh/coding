//Next N lines will contain nm, cls, s, and id respectively.
#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    int cls;
    char section;
    int id;
};
int main()
{
        int n;
        cin>>n;
    student ara[n];
    for(int i=0;i<n;i++){
        cin>>ara[i].name>>ara[i].cls>>ara[i].section>>ara[i].id;

    }
    for(int i=0,j=n-1;i<=j;i++,j--){
        swap(ara[i].id,ara[j].id);
    }
    for(int i=0;i<n;i++){
        cout<<ara[i].name<<" "<<ara[i].cls<<" "<<ara[i].section<<" "<<ara[i].id<<" "<<endl;
    }
    return 0;
}