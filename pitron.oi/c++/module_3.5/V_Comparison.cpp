#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    char n;
    cin>>x>>n>>y;
    int big=x>y;
    int sml=x<y;
    int eql=x==y;
    if('>'==n){
        if(big) cout<<"Right";
        else cout<<"Wrong";
    }
    else if('<'==n){
        if(sml){
            cout<<"Right";
        }
        else cout<<"Wrong";
    }
    else if('='==n){
        if(eql){
            cout<<"Right";
        }
        else cout<<"Wrong";
    }
    return 0;
}