#include<stdio.h>
int main()
{
    //  int a;
    //  a= 0;
    //  printf("%d", a);
    int a;
    scanf("%d", &a);
    int ara[a];
    for(int i=0;i<a;i++){
        scanf("%d", &ara[i]);
    }
    // printf("%d", ara[a]);
    for(int i=a-1;i>=0;i--){
        printf("%d\n", ara[i]);
    }
    return 0;
}