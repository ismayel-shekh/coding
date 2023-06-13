#include<stdio.h>
int main()
{
    char ara[7];
    for(int i=0;i<7;i++){
        scanf("%c", &ara[i]);
    }
    for(int i=0;i<7;i++){
        printf("%d\n", ara[i]);
    }
}