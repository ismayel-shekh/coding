#include<stdio.h>
int main()
{
    int row, cal;
    scanf("%d %d", &row, &cal);
    int ara[row][cal];
    for(int i=0;i<row;i++){
        for(int j=0;j<cal;j++){
            scanf("%d", &ara[i][j]);
        }
    }
    int count=0;
    int x;
    scanf("%d", &x);
    for(int i=0;i<row;i++){
        for(int j=0;j<cal;j++){
            if(ara[i][j]==x){
                count=1;
            }
        }
    }
    if(count){
        printf("will not take number");
    }
    else{
        printf("will take number");
    }
}