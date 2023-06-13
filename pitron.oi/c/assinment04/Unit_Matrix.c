#include<stdio.h>
int main()
{
    int r, c;
    scanf("%d", &r);
    c=r;
    int ara[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d", &ara[i][j]);
        }
    }
    int flag = 1;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==j){
                if(ara[i][j] != 1){
                    flag = 0;
                }
            }
            else if(ara[i][j] != 0){
                flag = 0;
            }

        }

    }
    if(flag){
        printf("YES");
    }
    else{
        printf("NO");
    }
}