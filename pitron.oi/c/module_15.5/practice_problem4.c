#include<stdio.h>
void chnge_it(int ara[], int n){
    ara[n-1]=100;
}
int main()
{
    int ara[3]={1, 2, 3};
    chnge_it(ara, 3);
    for(int i=0;i<3;i++){
        printf("%d ", ara[i]);
    }
}