#include<stdio.h>
// void fun(int *ar, int n)
void fun(double ar[], int n)
{
for(int i=0;i<n;i++){
    printf("%.2lf ", ar[i]);
}
}

int main()
{
    double ar[5]={1.21, 2.36, 3.58, 4.69, 5.582};
    fun(ar,5);
}