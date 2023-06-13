#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int c=a%10;
    // printf("%d", c);
    int d=a/10;
    // printf("%d", d);
    if(c%d==0||d%c==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

}