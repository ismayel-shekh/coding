#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ara[n], min=INT_MAX;
    for(int i=1;i<=n;i++){ //or use i=0
        scanf("%d", &ara[i]);
    }
    int pos;
    for(int i=1;i<=n;i++){ //or use i=0
        // printf("%d ", ara[i]); //test
        if(ara[i]<min){
            min=ara[i]; 
            pos=i; //also use pos=i+1;
        }
       
    }
    printf("%d %d\n",min, pos);
}