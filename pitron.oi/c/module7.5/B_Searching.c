#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ara[n];
    int x;
    for(int i=0;i<n;i++){
        scanf("%d", &ara[i]);
    }
    scanf("%d", &x);
    int ans=-1;
    for(int i=0;i<n;i++){
        if(ara[i]==x){
            ans=i;
            break;
        }
    }
    printf("%d", ans);
}