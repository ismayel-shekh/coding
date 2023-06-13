#include<stdio.h>
void fun(int n){
    if(n==0) return;
    int x = n % 10;//value 4
    fun(n/10);
    printf("%d ", x);
}
int main(){
    int test;
    scanf("%d", &test);
    for(int i=0;i<test;i++){
    int s;
    scanf("%d", &s);
    fun(s);
    if(s==0){
        printf("0");
    }
    printf("\n");
    }
}