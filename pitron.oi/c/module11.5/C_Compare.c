#include<stdio.h>
#include<string.h>
int main()
{
    char a[21], b[21];
    scanf("%s %s", a, b);
    // printf("%s %s", a, b);
    int l=strcmp(a,b);
    if(l<0){
        printf("%s", a);
    }
    else{
        printf("%s", b);
    }
}