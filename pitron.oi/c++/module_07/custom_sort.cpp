#include<bits/stdc++.h>
using namespace std;
class customsort{
    public:
    char c;
    int cnt;
};
bool cmp(customsort a,customsort b){
    if(a.cnt>b.cnt) return true;
    else return false;
}
int main()
{
    int n;
    cin>>n;
    customsort frc[26];
    for(int i=0;i<26;i++){
        frc[i].c=(i+97);
        frc[i].cnt=0;
    }
    for(int i=0;i<26;i++){
        char c;
        cin>>c;
        frc[c-'a'].cnt++;
    }
    sort(frc,frc+26,cmp);
    for(int i=0;i<26;i++)
    {
        if(frc[i].cnt>0){
        // cout<<frc[i].c<<" "<<frc[i].cnt<<endl;
        for(int j=0;j<frc[i].cnt;j++){
            cout<<frc[i].c;
        }
        }
    }
    return 0;
}