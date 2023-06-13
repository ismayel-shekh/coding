#include<stdio.h>
int main(){
    float a, b;
    scanf("%f %f", &a, &b);
    float s=(b/(1-(a/100)));
    printf("%.2f", s);
}