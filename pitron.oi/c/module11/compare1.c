#include<stdio.h>
#include<string.h>
int main()//ato sog 
{
    char a[1001], b[1001];
    scanf("%s %s", a, b);
    int v=strcmp(a,b);
    // printf("%d", v);
    if(v<0){
        printf("b boro\n");
        
    }
    else if(v>0){
        printf("a boro\n");
        
    }
    else{
        printf("shoman\n");
    }
}