#include<stdio.h>
#include<string.h>
int main()
{
    char str[1001];
    scanf("%s", str);
    int len=strlen(str);
    int cunt=0;
    for(int i=0;i<len;i++){
        if(str[i]=='a'){
            cunt++;
        }
        if(str[i]=='e'){
            cunt++;
        }
        if(str[i]=='i'){
            cunt++;
        }
        if(str[i]=='o'){
            cunt++;
        }
        if(str[i]=='u'){
            cunt++;
        }
    }
    printf("%d",cunt);
}