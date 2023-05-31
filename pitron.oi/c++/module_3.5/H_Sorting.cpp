#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // float ara[n];
    int ara[n];
    for(int i=0;i<n;i++) cin>>ara[i];
    sort(ara,ara+n);
    // sort(ara,ara+n,greater<float>());
    for(int i=0;i<n;i++) cout<<ara[i]<<" ";
    return 0;
}