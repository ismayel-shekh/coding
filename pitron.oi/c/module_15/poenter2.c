#include<stdio.h>
int main()
{
    double x =6.9;
    double * ptr =&x;
    
    printf(" %.2lf\n", x);
    printf(" %.2lf\n", *ptr);
    *ptr=5.69;
    printf(" %.2lf\n", *ptr);
    double *ptr2=ptr;
    *ptr2=100.56;
    printf(" %.2lf\n", *ptr2);
    printf(" %.2lf\n", x);
    printf(" %.2lf\n", *ptr);


    printf(" %d\n", sizeof(ptr));

}
    