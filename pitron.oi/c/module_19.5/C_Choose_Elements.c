#include<stdio.h>
int main()
{
    int  n, k;
    scanf("%d %d", &n, &k);
    int ara[n];
    for(int i=0;i<n;i++){
        scanf("%d", &ara[i]);
    }
    for(int i=0, j=n-1;i<j;i++,j--){
        if(ara[i]>ara[j]){
            int temp=ara[i];
            ara[i]=ara[j];
            ara[j]=temp;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ", ara[i]);
    }
    long long sum=0;
    for(int i=0;i<k;i++){
        sum+=ara[i];
    }
    printf("%lld", sum);
    
}