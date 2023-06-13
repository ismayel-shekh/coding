#include<stdio.h>
int main()
{
    int i;
    printf("enter number");
    scanf("%d", &i);
    if(i == 5){
        printf("sleep");
    }
     else if(i <= 10){
        printf("play");

    }
    else if(i >= 2){
        printf("go");
    }
    else{
        printf("kiso na");
    }

    return 0;
}