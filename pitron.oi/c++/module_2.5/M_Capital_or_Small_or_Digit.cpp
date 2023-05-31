#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    cin>>a;
    if(a>='A'&&a<='z') {
    cout<<"ALPHA"<<endl;
    if(a>='A'&&a<='Z') cout<<"IS CAPITAL"<<endl;
    else cout<<"IS SMALL"<<endl;
    }
    else cout<<"IS DIGIT"<<endl;
}