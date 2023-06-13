#include<stdio.h>
void max_min(int ara[], int n){
    int min=ara[0];
    
    int max=ara[0];
    for(int i=1;i<n;i++){
        if(ara[i]>max){
            max=ara[i];
        }
        if(ara[i]<min){
            min=ara[i];
        }
    }
    printf("%d %d",min, max);
}
int main()
{
    int n;
    scanf("%d", &n);
    int ara[n];
    for(int i=0;i<n;i++){
        scanf("%d", &ara[i]);
    }
    max_min(ara, n);
}