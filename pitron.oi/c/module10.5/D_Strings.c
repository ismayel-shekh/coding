#include<stdio.h>
#include<string.h>
int main()
{
    char s[100], p[100];
    scanf("%s %s", s, p);
    int lent1=strlen(s);
    int lent2=strlen(p);
    char sp[200];
    printf("%d %d\n", lent1, lent2);
    
    for(int i=0;i<lent1;i++){
        sp[i]=s[i];
        
    }
    for(int i=0;i<lent2;i++){
        sp[lent1]=p[i];
        lent1++;
    }
    printf("%s\n", sp);
    int temp;
     temp=s[0];
     s[0]=p[0];
     p[0]=temp;
     printf("%s %s\n", s, p);

    

}