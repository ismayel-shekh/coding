// You will be given data for N students, where each student will have a name (nm), 
//class (cls), section (s), student ID (id), math marks (math_marks), and English marks (eng_marks).
#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    int cls;
    char section;
    int id;
    int math;
    int eng;
};
    bool king(student a,student b){
        int l=a.math+a.eng;
        int y=b.math+b.eng;
        if(l>y) return true;
        if(l==y) return a.id < b.id;
        
        else return false;
    }
int main()
{
    int n;
    cin>>n;
    student a[n];
    for(int i=0;i<n;i++){
        cin>>a[i].name>>a[i].cls>>a[i].section>>a[i].id>>a[i].math>>a[i].eng;
    }
    sort(a,a+n,king);
    for(int i=0;i<n;i++){
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].section<<" "<<a[i].id<<" "<<a[i].math<<" "<<a[i].eng<<endl;
    }
    
    return 0;
}
