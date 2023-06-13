#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    int cls;
    char section;
};
bool cmp(student a, student b){
    if(a.cls<b.cls) return true;
    else return false;
}
int main()
{
    int x;
    cin>>x;
    student a[x];
    for(int i=0;i<x;i++){
        cin>>a[i].name;
        cin>>a[i].cls;
        cin>>a[i].section;
    }
    // for(int i=0;i<x-1;i++){
    //     for(int j=i+1;j<x;j++){
    //         swap(a[i],a[j]);
    //     }
    // }
    sort(a,a+x,cmp);
    for(int i=0;i<x;i++){
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].section<<endl;
    }
    
    return 0;
}