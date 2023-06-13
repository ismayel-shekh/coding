#include<stdio.h>
void fun(int *p, int *l)
{
   *p=10;
   *l=5;
}
int main()
{
   int x=20;
   int y=200;
   fun(&x, &y);
   printf("%d", x+y);
}
