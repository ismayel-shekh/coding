#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ara[n];
    int zero=0;
    for(int i=0;i<n;i++){
        scanf("%d", &ara[i]);
    }
    for(int i=0;i<n;i++){
        if(ara[i]==0){
            zero++;
        }
        
    }
    printf("%d", zero);
}