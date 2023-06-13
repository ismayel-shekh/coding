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
    for(int i=0;i<row;i++){
        for(int j=cal-1;j>=0;j--){
            printf("%d ", ara[i][j]);
        }
        printf("\n");
    }
}