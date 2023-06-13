#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d", &n);
    int a,min=INT_MAX,max=INT_MIN;
    // printf("min=%d\nmax=%d", min, max);
    for(int i=1;i<=n;i++){
        scanf("%d", &a);
        if(a<min){
            min=a;
        }
        if(a>max){
            max=a;
        }
    }
    printf("%d %d", min, max);
}