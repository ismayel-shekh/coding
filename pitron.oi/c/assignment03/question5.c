#include<stdio.h>
#include<string.h>
int is_palindrome(char str[]){
    int len=strlen(str);
    for(int i=0,j=len-1;i<len/2;i++, j--){
        if(str[i] != str[j]){
            return 0;
        }
    }
    return 1;
}
int main()
{
    int str[10];
    scanf("%s", str);
    int k = is_palindrome(str);
    if(k){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
}