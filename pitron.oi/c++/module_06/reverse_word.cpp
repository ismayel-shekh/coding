#include<bits/stdc++.h>
using namespace std;
void fing(stringstream& ss)
{
    string word;
    if(ss>>word)
    {
        fing(ss);
        cout<<word<<endl;
        
    }
}
int main()
{
    string s;
    getline(cin,s);
    stringstream ko(s);
    // string word;
    // while(ko>>word) cout<<word<<endl;
    fing(ko);
    return 0;
}