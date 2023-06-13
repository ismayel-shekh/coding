#include<stdio.h>
#include<string.h>
int main()
{
    char str[1001];
    scanf("%s", str);
    int len=strlen(str);
    int capital=0, small=0;
    for(int i=0;i<len;i++){
        
        if(str[i]>='a' && str[i]<= 'z'){
            small++;
        }
        if(str[i]>='A' && str[i]<= 'Z'){
            capital++;
        }
    }
    printf("%d %d\n", capital, small);
}