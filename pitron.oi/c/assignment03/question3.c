#include<stdio.h>
int count_before_zero(int ara[], int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(ara[i]==0){
            break;
        }
        count++;
    }
    return count;
}
int main()
{
    int n;
    scanf("%d", &n);
    int ara[n];
    for(int i=0;i<n;i++){
        scanf("%d", &ara[i]);
    }
    int count=count_before_zero(ara, n);
    printf("%d", count);
}