#include<stdio.h>
void hai(int n){
    for(int i=1;i<=n;i++){
        printf("%d ", i);
    }
    
}
int main(){
    int n;
    scanf("%d", &n);

    hai(n);
    return 0;
}
    