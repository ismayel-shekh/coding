#include<bits/stdc++.h>
using namespace std;
void get_array(int *a,int n)
{
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    
}
int main()
{
    int n;
    cin>>n;
    int *ara=new int[n];
    for(int i=0;i<n;i++) cin>>ara[i];
    get_array(ara,n);
}