#include<stdio.h>
void count_odd(int ara[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(ara[i]%2!=0){
            count++;
        }
    }
    printf("%d", count);
}
int main()
{
    int ara[5]={1, 5, 4, 10, 2};
    count_odd(ara,5);
}