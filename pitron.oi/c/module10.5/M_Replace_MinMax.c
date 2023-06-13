#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ara[1000];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &ara[i]);
    }
    int min_index=0,max_index=0;
    for(int i=0;i<n;i++){
        if(ara[i]>ara[max_index]){
            max_index=i;
        }
        if(ara[i]<ara[min_index]){
            min_index=i;
        }
    }
    // printf("%d %d", min_index, max_index);
    int temp;
    for(int i=0;i<n;i++){
        temp=ara[min_index];
        ara[min_index]=ara[max_index];
        ara[max_index]=temp;

    }
    for(int i=0;i<n;i++){
        printf("%d ", ara[i]);
    }
    
} 