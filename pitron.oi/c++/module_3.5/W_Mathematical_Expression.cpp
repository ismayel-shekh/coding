#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,y,g;
    char n,l;
    cin>>x>>n>>y>>l>>g;
    long long sum=x+y;
    long long gun=x*y;
    long long mins=x-y;
    if('+'==n){
        if(sum==g){
            cout<<"Yes";
        }
        else{
            cout<<sum;
        }
    }
    else if('*'==n){
        if(gun==g){
            cout<<"Yes";
        }
        else{
            cout<<gun;
        }

    }
    else if('-'==n){
        if(mins==g){
            cout<<"Yes";
        }
        else{
            cout<<mins;
        }

    }

    return 0;
}