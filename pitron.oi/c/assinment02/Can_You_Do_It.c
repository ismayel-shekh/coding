#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if(a>0){
        for(int i=1;i<=a;i++){
            printf("%d ", i);
        }
    }
    if(a<0){
        for(int i=a;i<=1;i++){
            printf("%d ", i);
        }
    }
    if(a==0){
        printf("0 1");
    }
}