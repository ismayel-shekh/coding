#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ara[n];
    for(int i=0;i<n;i++){
        scanf("%d", &ara[i]);
    }
    int c;
    scanf("%d", &c);
    int count=0;
    for(int i=0;i<n;i++){
        if(ara[i]==c){
            count++;
        }
    }
    printf("%d", count);
}