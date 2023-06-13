// Next N lines will contain
//  nm, cls, s, math_marks and eng_marks respectively.
#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    int cls;
    char section;
    int math;
    int eng;
    
};
int main()
{
    int n;
    cin>>n;
    student a[n];
    for(int i=0;i<n;i++){
        
        cin>>a[i].name>>a[i].cls>>a[i].section>>a[i].math>>a[i].eng;
    }
    for(int i=0,j=n-1;i<=j;i++,j--){
         swap(a[i],a[j]);
    }
   
    for(int i=0;i<n;i++){
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].section<<" "<<a[i].math<<" "<<a[i].eng<<endl;
    }
    return 0;
}