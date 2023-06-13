#include<stdio.h>
int main()
{
    int a;//what value
    scanf("%d", &a);
    for(int i=1;i<=a;i++){
        int n;
        scanf("%d", &n);
        do//fast run than condition 
        {//work
            printf("%d ", n%10);
            n=n/10;
        } while (n!=0);
        // printf("%d", n);
        printf("\n");
        
    }
    return 0;
}