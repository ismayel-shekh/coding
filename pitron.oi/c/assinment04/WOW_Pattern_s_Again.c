#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int s=n-1, k=1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<s;j++){
            printf(" ");
        }
        if(i%2==0){
        for(int j=0;j<k;j++){
        printf("*");
        }
        }
        else{
        for(int j=0;j<k;j++){
        printf("^");
        }
            
           }
        
        printf("\n");
        s--;
        k+=2;
    }
    }
