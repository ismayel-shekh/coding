#include<stdio.h>
#include<string.h>
int main()
{
    char a[10001];
    scanf("%s", a);
    // printf("%s",a );
    int st=strlen(a);
    printf("%d\n",st );
    printf("%c%d%c\n", a[0], st-2, a[strlen(a)-1]);
    


}
