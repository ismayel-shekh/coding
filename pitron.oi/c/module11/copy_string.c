#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    char b[100]; 
    scanf("%s", a);
    scanf("%s", b);
    strcpy(b,a);
    // for(int i=0;i<=strlen(a);i++){
    //     b[i]=a[i];
    // }
    printf("%s %s", a,b);
}