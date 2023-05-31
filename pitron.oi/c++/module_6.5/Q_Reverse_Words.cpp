#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string word;
    stringstream ss(s);
    while(ss>>word){
        swap(s.begin(),s.end());
        cout<<word<<endl;
    }
    return 0;
}