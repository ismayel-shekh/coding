#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    // stringstream ss(s);
    stringstream ss;
    ss<<s;
    string word;
    int ct=0;
    // ss>>word;
    // cout<<word<<endl;
    // ss>>word;
    // cout<<word<<endl;
    while(ss>>word){
        // cout<<word<<endl;
        ct++;
    }
    cout<<ct;
    return 0;
}