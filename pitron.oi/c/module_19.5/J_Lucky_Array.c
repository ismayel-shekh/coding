#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int ara[n];
    for(int i=0;i<n;i++){
        scanf("%d", &ara[i]);
    }
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(ara[i]>ara[j]){
                    int temp=ara[i];
                    ara[i]=ara[j];
                    ara[j]=temp;
                }
            }
        }
    int count = 0;
    for(int i=0;i<n;i++){
        if(ara[0]==ara[i]){
            count++;
        }
    }
    if(count%2==0){
        printf("Unlucky");
    }
    else{
        printf("Lucky");
    }
}