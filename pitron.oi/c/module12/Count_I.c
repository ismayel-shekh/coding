#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ara[n];
    for(int i=0;i<n;i++){
        scanf("%d", &ara[i]);
    }
    int even=0, odd=0;
    for(int i=0;i<n;i++){
        if(ara[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("%d %d\n", even, odd);
}