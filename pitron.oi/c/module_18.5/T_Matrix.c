#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int row, cal;
    scanf("%d", &row);
    cal=row;
    int ara[row][cal];
    for(int i=0;i<row;i++){
        for(int j=0;j<cal;j++){
            scanf("%d", &ara[i][j]);
        }
    }
    int sum1=0;
    int sum2=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<cal;j++){
            if(i==j){
                sum1=sum1+ara[i][j];
            }
            if(i+j==row-1){
                sum2+=ara[i][j];
            }
        }
    }
    int summation=abs(sum1-sum2);
    printf("%d", summation);
    return 0;
}