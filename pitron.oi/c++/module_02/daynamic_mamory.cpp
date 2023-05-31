#include<bits/stdc++.h>
using namespace std;
int main()
{

    float *x=new float;
    *x=10.20;
    float *y=new float;
    *y=*x;
    delete x;
    cout<<*y;
}
