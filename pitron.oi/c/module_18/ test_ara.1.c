#include<stdio.h>
int main()
{
    int row=3, colum=3;
    int a[row][colum];
    for(int i=0;i<row;i++){
        for(int j=0;j<colum;j++){
            scanf("%d", &a[i][j]);
        }
    }
    // int e=1;//want row 
    // for(int i=0;i<colum;i++){
    //     printf("%d ", a[e][i]);
    // }
    // printf("\n");
    // int l=2;//want colum
    // for(int i=0;i<row;i++){
    //     printf("%d ", a[i][l]);
    // }
    for(int i=0;i<row;i++){
        printf("%d ", i);
        printf("\n");
        for(int j=0;j<colum;j++){
            printf("%d ",j);
        }
    }
}