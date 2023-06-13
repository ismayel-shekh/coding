#include<stdio.h>
#include<string.h>
int main()
{
    char a[150], b[100];
    scanf("%s %s", a, b);
    int k=strlen(a);
    for(int i=0;i<6;i++){
        a[k]=b[i];
        k++;
        a[12]='\0';
    }
    int l=strlen(a);
    printf("%d", l);
    printf("%s %s",a,b);
}