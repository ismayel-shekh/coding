#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ara[n];
    for(int i=0;i<n;i++){
        scanf("%d", &ara[i]);
    }
    for(int i=0;i<n;i++){
            if(ara[i]<0){
            ara[i]=2;
            }
            else if(ara[i]>0){
                ara[i]=1;
            }
            else{
                ara[i]=0;
            }
            printf("%d ", ara[i]);
        }

        
}