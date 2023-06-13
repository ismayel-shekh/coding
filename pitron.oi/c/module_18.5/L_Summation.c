#include<stdio.h>
int sum(int ara[], int n, int i){
    if(i==n)return 0;
    return ara[i]+sum(ara, n, i+1);
}
int main()
{
    int n;
    scanf("%d", &n);
    int ara[n];
    for(int i=0;i<n;i++){
        scanf("%d", &ara[i]);
    }
    int k=sum(ara, n, 0);
    printf("%d", k);
}
