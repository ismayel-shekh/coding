#include<stdio.h>
int main()
{   int a, b, c, d;
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int sum=b+c+d;
    int ans=a-sum;
    printf("%d\n", ans);
    }
}