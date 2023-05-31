#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    while (k--)
    {
       
    
    
    int n;
    cin>>n;
    int ara[n];
    int mn=INT_MAX;
    for(int i=1;i<=n;i++) cin>>ara[i];
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            int x=ara[i]+ara[j]+(j-i);
            mn=min(mn,x);
        }
    }
    cout<<mn;
    }
    return 0;
}