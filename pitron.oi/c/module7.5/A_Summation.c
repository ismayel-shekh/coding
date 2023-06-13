#include<stdio.h>
int main()
{
    // printf("hallo");
    long long int a;
    scanf("%lld", &a);
    long long int ara[a];
    for(int i=0;i<a;i++){
        scanf("%lld", &ara[i]);
    }
    long long int sum=0;
    for(int i=0;i<a;i++){
        sum=sum+ara[i];
    }
    long long int l;
    if(sum<0){
        l=sum*(-1);
        printf("%lld", l);
    }
    else{
    printf("%lld", sum);
    }

    return 0;
}