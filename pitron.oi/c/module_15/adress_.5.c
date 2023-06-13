// #include<stdio.h>
// int main()
// {
//     int x=100;
//     int * ptr =&x;
//     printf("x er address - %p\n",ptr);
//     printf("%d", sizeof(ptr));
//     }
#include<stdio.h>
int main()
{
    int x=100;
    int * ptr =&x;
    *ptr=200;
    printf("%d", x);
    printf("%d", *ptr);
}