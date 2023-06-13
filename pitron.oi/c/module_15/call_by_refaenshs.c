#include<stdio.h>
void fun(int *p)
{
    *p=50;
    printf("%p\n", p);
    *p=500;

}
int main()
{
    int x=10;
    fun(&x);
    // printf("%d", x);
    printf("%p\n", &x);
    printf("%d\n", x);
} 