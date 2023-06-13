#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int ara[3]={a, b, c};
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            if(ara[i]>ara[j]){
                int temp=ara[i];
                ara[i]=ara[j];
                ara[j]=temp;
            }
        }
        printf("%d\n", ara[i]);
    }
    printf("\n");
    
    printf("%d\n%d\n%d\n", a, b, c);
}