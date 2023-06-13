#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int tiger=0;
    int lion=0;
    int a, b;
    for(int i=0;i<n;i++){
    scanf("%d %d", &a, &b);
    if(a>b){
        tiger++;
    }
    if(a<b){
        lion++;
    }
    }
    if(tiger>lion){
        printf("Tiger");
    }
    if(tiger<lion){
        printf("Pathan");
    }
    if(tiger==lion){
        printf("Draw");
    }
}