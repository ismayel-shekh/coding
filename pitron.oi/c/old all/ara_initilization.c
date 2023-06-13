#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i; 
    int ara[n];
    for(i=0;i<n;i++){
        scanf("%d", &ara[i]);
    }
    for(i=n-1;i>=0;i--){
        printf("%d\n", ara[i]);
    }
    return 0;
}