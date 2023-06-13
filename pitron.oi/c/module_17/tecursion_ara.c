#include<stdio.h>
void fun(int ara[], int n, int i){
    if(i==n)return;
    printf("%d ", ara[i]);
    fun(ara,n, i+1);
}
int main()
{
    int a;
    scanf("%d", &a);
    int ara[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d", &ara[i]);
    }
    fun(ara, a, 0);
    
}