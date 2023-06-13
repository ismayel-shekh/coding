#include<stdio.h>
#include<limits.h>
int main()
{
    int a, n, min=INT_MAX, max=INT_MIN;
    scanf("%d", &a);
    for(int i=1;i<=a;i++){
        scanf("%d", &n);
        if(n<min){
            min=n;
        }
        if(n>max){
            max=n;
        }
    }
    printf("%d %d", max, min);
    return 0;

}