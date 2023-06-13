#include<stdio.h>
void even(void){
    int a = 10;
    if(a%2==0){
        printf("EVEN\n");
    }
    else{
        printf("ODD\n");
    }
}
int main()
{
    even();
}