#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ara[n];
    for(int i=1;i<=n;i++){
        scanf("%d", &ara[i]);
    }
    for(int i=1;i<=n-1;i++){
        for(int j=i+1;j<=n;j++){
            if(ara[i]>ara[j]){
                int temp=ara[i];
                ara[i]=ara[j];
                ara[j]=temp;
            }
        }
    }
if(n%2==0){
    printf("%d %d", ara[n/2], ara[(n/2)+1]);
}
else{
    printf("%d", ara[(n+1)/2]);
}
}