#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="Hello";
    // cout<<*s.begin()<<endl;
    // cout<<*(s.end()-1)<<endl;
    // string::iterator it;
    for (auto it=s.begin();it<s.end();it++){
        cout<<*it<<endl;
    }
    return 0;
}