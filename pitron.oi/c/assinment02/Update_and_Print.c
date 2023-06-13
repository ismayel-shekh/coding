#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ara[n];
    int l, k;
    for(int i=0;i<n;i++){
       
       scanf("%d", &ara[i]);
    //     scanf("%d %d", &l, &k);
    //    ara[l]=k;
    }
    scanf("%d %d", &l, &k);
    ara[l]= k; 
    for(int i=n-1;i>=0;i--){
         ara[l]=k;
        printf("%d ", ara[i]);
    }
}