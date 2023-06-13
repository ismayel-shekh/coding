#include<stdio.h>
#include<string.h>
int main()
{
    char str[1001];
    scanf("%s", str);
    int len=strlen(str);
    int car[26]={0};
    for(int i=0;i<len;i++){
        int value=str[i]-'a';
        car[value]++;
    }
    for(int i=0;i<26;i++){
        
        printf("%c - %d\n",i+'a', car[i]);
    
    }
}