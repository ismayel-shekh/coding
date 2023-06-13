#include<stdio.h>
int fun(int n){
    if(n==0){
        return 1;
    }
    int ans=fun(n-1);
    return ans*n;

}
int main()
{
    int i=4;
    int x=fun(i);
    printf("%d", x);
    
}