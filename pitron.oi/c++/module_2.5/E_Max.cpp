#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long ara[n];
    long long mx;
     for(int i=0;i<n;i++) cin>>ara[i];
    // for(int i=0,j=n-1;i<=j;i++,j--){
    //     mx = max(mx,max(ara[i],ara[j]));
    // }
    // cout<<mx;
    mx=ara[0];
    for(int i=0;i<n;i++){
        
        mx= max(mx,ara[i]);
    } 
    cout<<mx;
}