#include<stdio.h>
void sum(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    int i=a+b;
    printf("%d", i);
}
int main()
{
    sum();
    sum();
    sum();
    return 0;
}