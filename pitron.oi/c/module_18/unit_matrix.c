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
    int flag=1;
    if(row!=cal){
        flag=0;
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<cal;j++){
            if(i==j){
                if(ara[i][j]!=1){
                    flag=0;
                }
                continue;
            }
            if(ara[i][j]!=0){
                flag=0;
            }
        }
    }
    if(flag==1){
        printf("unit");
    }
    else{
        printf("non unit");
    }
}
