#include<stdio.h>
int main()
{
    int i, j;
    scanf("%d", &j);
       if(j<2){
            printf("-1\n");
        }
         else (j%2==0){
            for(i=2;i<=j;i+=2){
            printf("%d\n", i);
        }
         }

    return 0;
}