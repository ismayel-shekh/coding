#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ara[n];
    for(int i=0;i<n;i++){
        scanf("%d", &ara[i]);
    }
    int pas, value;
    scanf("%d %d", &pas, &value);
    for(int i=n;i>pas+1;i--){
        // printf("%d", ara[i]);
        ara[pas]=value;
    }
    for(int i=0;i<n;i++){
        printf("%d ", ara[i]);
    }
}