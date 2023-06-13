#include<stdio.h>

int main()
{
    int row=5, col=4;
    int ara[row][col];
    
    // Taking input from user
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d", &ara[i][j]);
        }
    }
    
    int r=2;
    int c=2;
    
    // Printing the row r
    for(int i=0;i<col;i++){
        printf("%d ", ara[r][i]);
    }
    
    // Printing the column c
    for(int i=0;i<row;i++){
        printf("%d ", ara[i][c]);
    }
    
    return 0;
}
