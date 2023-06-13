#include<stdio.h>
int main()
{
    int row,cal;
    scanf("%d %d", &row,&cal);
    int ara[row][cal];
    for(int i=0;i<row;i++){
        for(int j=0;j<cal;j++){
            scanf("%d", &ara[i][j]);
        }
    }
    for(int i=0;i<cal;i++){
        printf("%d ", ara[row-1][i]);   
    }  printf("\n");
    for(int i=0;i<row;i++){
        printf("%d ", ara[i][cal-1]);
    }
}
    