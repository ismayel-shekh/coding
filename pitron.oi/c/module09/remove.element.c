#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int ara[n];
    for(int i=0;i<n;i++){
        scanf("%d", &ara[i]);
    }
    int pos;
    scanf("%d", &pos);
    for(int i=pos;i<n-1;i++)
    {
        ara[i]=ara[i+1];
    }
    for(int i=0;i<n-1;i++){
        printf("%d ", ara[i]);
    }
}