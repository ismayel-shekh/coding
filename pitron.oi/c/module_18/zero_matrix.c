#include<stdio.h>
int main()
{
    int row=3,col=2;
    int ara[row][col];
    int ans=row*col;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d", &ara[i][j]);
        }
    }
    int count=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            // printf("%d", ara[i][j]);
            if(ara[i][j]==0){
                count++;
            }
            
        }
    }
    if(ans==count){
        printf("NUL MATRIX");
    }
    else{
        printf("NOT NAL MATRIX");
    }
   
}