#include<bits/stdc++.h>
using namespace std;
namespace rakib{
    int age=12;
    void hello1()
    {
        cout<<"sakib"<<endl;
    }
}
namespace ismayel{
    int age2=90;
    void hello(){
        cout<<"ismayl"<<endl;
    }
}
using namespace rakib;
using namespace ismayel;
int main()
{
    // cout<<rakib::age<<endl;
    //  cout<<ismayel::age2<<endl;
    cout<<age<<endl;
    cout<<age2<<endl;
     hello();
     hello1();
    return 0;
}