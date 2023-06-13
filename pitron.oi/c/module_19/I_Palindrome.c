#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    char b[1000];
    scanf("%s", a);
    strcpy(b, a);
    int len=strlen(b);
    
    for(int i=0, j=len-1;i<j;i++, j--){
        int temp=b[i];
        b[i]=b[j];
        b[j]=temp;

    }
    if(strcmp(a,b)==0){
        printf("YES");
    }
    else{
    printf("NO");
    }
}