#include<stdio.h>
int fine(int ara[], int n,int i){
    if(i==n)return 0;
    int max=fine(ara,n,i+1);
    if(ara[i]>max){
        max=ara[i];
    }
    return max;
}
int main()
{
    int n;
    scanf("%d", &n);
    int ara[n];
    for(int i=0;i<n;i++){
        scanf("%d", &ara[i]);
    }
    int max=fine(ara,n,0);
    // int max=ara[0];
    // for(int i=0;i<n;i++){
    //     if(ara[i]>max){
    //         max=ara[i];
    //     }

    // }
    printf("%d",max);
}