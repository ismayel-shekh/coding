#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ara[n];
    for(int i=0;i<n;i++){
        scanf("%d", &ara[i]);
    }
    int count[7]={0};
    for(int i=0;i<n;i++){
        int val=ara[i];
        count[ara[i]]++;
    }
    for(int i=0;i<7;i++){
        printf("%d- %d\n",i, count[i]);
    }


}