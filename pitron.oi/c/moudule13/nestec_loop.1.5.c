#include<stdio.h>
int main()
{
    int a, k;
    scanf("%d", &a);
    k=a;
    for(int i=a;i>=1;i--){
        for(int j=k;j>=1;j--){
            printf("*");
        }
        k--;
        printf("\n");
    }
}