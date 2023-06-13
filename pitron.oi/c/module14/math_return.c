#include<stdio.h>
#include<math.h>
int main()
{
    double x;
    scanf("%lf", &x);
    int ans1=ceil(x);
    int ans2=floor(x);
    int rou=round(x);
    printf("%d %d %d", ans1, ans2, rou);
}