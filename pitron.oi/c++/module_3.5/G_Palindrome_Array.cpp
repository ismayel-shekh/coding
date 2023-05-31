#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++) cin>>ara[i];
    int flag=1;
    for(int i=0,j=n-1;i<=j;i++,j--){
        if(ara[i]!=ara[j]){
            flag=0;
            break;
        }

    }
    if(flag){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}