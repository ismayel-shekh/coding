#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
     int ara[n];
    for(int i=0;i<n;i++){
        scanf("%d", &ara[i]);
    }
    int x;
    scanf("%d", &x);
    int flag=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(ara[i]+ara[j]==x){
            flag=1;
            }
        }
    }
    if(flag==0){
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }
    
}