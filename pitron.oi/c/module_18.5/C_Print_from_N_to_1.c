#include<stdio.h>
void fun(int i,int n){
    if(i==n+1)return;
    fun(i+1, n);
    printf("%d ", i);
}
int main()
{
    int s;
    scanf("%d", &s);
    fun(1, s);
    return 0;
}