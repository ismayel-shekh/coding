#include<stdio.h>
void fun(int x)
{
printf("fun x ar address - %p\n", &x);
x=200;
printf("%d", x);
}
int main()
{
    int x=10;
    printf("main x ar address - %p\n", &x);
    fun(x);
    printf("%d", x);
}