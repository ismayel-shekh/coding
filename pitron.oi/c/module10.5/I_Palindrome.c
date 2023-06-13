#include<stdio.h>
#include<string.h>
int main()
{
 char str[10001];
 scanf("%s", str);
 int len=strlen(str);
 int paindrome=1;
 for(int i=0;i<len/2;i++){
    if(str[i]!=str[len-1-i]){
        paindrome=0;
        break;
    }

 }
 if(paindrome){
    printf("YES\n");
 }
 else{
    printf("NO\n");
 }
    
}