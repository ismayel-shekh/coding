#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    for(int m=0;m<x;m++){

    
    int n;
    cin>>n;
    int ara[n];
        int even=0;
        int odd=0;

    for(int i=0;i<n;i++){
        cin>>ara[i];
        if(ara[i] % 2 == 0) even++;
        else odd++;
    }
    if(n % 2 == 1){
        cout<<"-1"<<endl;
    }
    else {
        if(even==0 || odd==0) cout<<n/2<<endl;
        else{
            int a=(even-odd);
            if(a>0){
                cout<<a<<endl;
            }
            else{
                cout<<a*(-1)<<endl;
            }
        }
    }
    }
    return 0;
}