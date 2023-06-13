#include<stdio.h>
void fun(int i, int n)
{
    if(i==n)return;
    printf("%d\n", i);
    fun(i+1,n);
}
int main()
{
    int s;
    scanf("%d", &s);
    fun(1,s+1);
}