#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    fgets(s,1001,stdin);
    int len = strlen(s);
    int cpt=0, sml=0, sps=0;
    for(int i=0;i<len;i++){
        if(s[i]>='A'&& s[i]<='Z'){
            cpt++;
        }
         else if(s[i]>='a'&& s[i]<='z'){
            sml++;
        }
        else if(s[i]==' '){
            sps++;
        }
    }
    printf("Capital - %d\nSmall - %d\nSpaces - %d\n", cpt, sml, sps);
}