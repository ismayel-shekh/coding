#include<stdio.h>
int main()
{
    int n,l;
    scanf("%d %d", &n, &l);
    int ara[n];
    int count[l];
    for(int i=0;i<l;i++){
        count[i]=0;
    }
    for(int i=0;i<n;i++){
        scanf("%d", &ara[i]);
    }
    for(int i=0;i<n;i++){
        count[ara[i]-1]++;
    }
    for(int i=0;i<l;i++){
        printf("%d = %d\n",i+1, count[i]);
    }

}