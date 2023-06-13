#include <stdio.h>

int main()
{
    int row, clm;
    scanf("%d", &row);
    clm = row;
    int ara[row][clm];
    for(int i=0; i<row; i++){
        for(int j=0; j<clm; j++){
            scanf("%d", &ara[i][j]);
        }
    }
    int sum = 0;
    for(int i=0; i<row; i++){
        for(int j=0; j<clm; j++){
            if(i == j){
                sum = sum + ara[i][j];
            }
        }
    }
    printf("%d", sum);
    return 0;
}

