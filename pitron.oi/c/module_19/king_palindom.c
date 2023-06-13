#include<stdio.h>
#include<string.h>
int main(){
    char a[1001];
    scanf("%s", a);
    int len=strlen(a);
    int palindom=0;
    for(int i=0, j=len-1;i<j;i++,j--){
        if(a[i]==a[j]){
            palindom=1;
        }
    }
    if(palindom){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
