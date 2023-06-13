#include<stdio.h>
void fun(int i){
    if(i==11)return;
    printf("%d ", i);
    fun(i+1);
}
int main()
{
    fun(1);
}