#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int mains=a-b;
    if(mains > 0){
        printf("%d\n", mains);
    }
    else{
        printf("0\n");
    }
    return 0;
}