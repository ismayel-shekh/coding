#include<stdio.h>
void my_abs(int x){
    if(x<0){
        printf("%d", x*-1);
    }
    else{
        printf("%d", x);
    }
}
int main()
{
    int x=-7;
    my_abs(x);
}