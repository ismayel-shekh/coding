#include<stdio.h>
void swap_it(int x, int y){
    int temp=x;
    x=y;
    y=temp;
    printf("%d %d", x, y);

}
int main()
{
    int x=10, y=20;
    swap_it(x,y);
}