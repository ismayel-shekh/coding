#include<stdio.h>
#include<string.h>
int main()
{
    char a[17];
    fgets(a,17,stdin);
    a[13]='\0';//nal bosaya disi tai porar ta nay nhi
    printf("%s", a);
}