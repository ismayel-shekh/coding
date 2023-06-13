#include<stdio.h>
int main()
{
    int row=5, colam=3;
    int a[row][colam];
    for(int i=0;i<row;i++){
        for(int j=0;j<colam;j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<colam;j++){
    //         printf("%d ", a[i][j]);
    //     }
    //     printf("\n");
    // }
    // int e=4;
    // //want row
    // for(int i=0;i<colam;i++){
    //     printf("%d ", a[e][i]);
    // }
    //want colam
    int l=0;
    for(int i=0;i<row;i++){
        printf("%d ", a[i][l]);
    }

}