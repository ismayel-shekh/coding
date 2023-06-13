#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ara[n+1];
    for(int i=0;i<n;i++){
        scanf("%d", &ara[i]);
    }
    int pos, value;
    scanf("%d %d", &pos, &value);
    for(int i=n; i>=pos;i--){
        ara[i]=ara[i-1];
    }
     ara[pos]=value;
    for(int i=0;i<n+1;i++){
        printf("%d ", ara[i]);
    }
}