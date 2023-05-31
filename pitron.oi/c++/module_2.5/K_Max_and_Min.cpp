#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int m=max(a,b);
    int mx=max(m,c);
    int x=min(a,b);
    int mn=min(x,c);
    cout<<mn<<" "<<mx;
    return 0;
}