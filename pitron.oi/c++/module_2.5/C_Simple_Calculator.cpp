// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     cout<<a<<" "<<"+"<<" "<<b<<" "<<"="<<" "<<a+b<<endl;
//     cout<<a<<" "<<"*"<<" "<<b<<" "<<"="<<" "<<a*b<<endl;
//     cout<<a<<" "<<"-"<<" "<<b<<" "<<"="<<" "<<a-b<<endl;

//     return 0;
// }
#include<bits/stdc++.h>//problem
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int sum_x = a+b;
    long long int mul_x = a*b;
    int sub_x = a-b;
 
    cout<<a <<" "<<'+' <<" "<<b <<" "<<'='<<" "<<sum_x<<endl;
    cout<<a <<" "<<'*' <<" "<<b <<" "<<'='<<" "<<mul_x<<endl;
    cout<<a <<" "<<'-' <<" "<<b <<" "<<'='<<" "<<sub_x<<endl;
 
    return 0;
}