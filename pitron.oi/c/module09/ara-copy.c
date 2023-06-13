#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ara[n];
    for(int i=0;i<n;i++){
        scanf("%d", &ara[i]);
    }
    int m;
    scanf("%d", &m);
    int bom[m];
    for(int i=0;i<m;i++){
        scanf("%d", &bom[i]);
    }
    int ans[n+m];
    for(int i=0;i<n;i++){
        ans[i]=ara[i];
    }
    int i=n;
    for(int j=0;j<m;j++){
        ans[i]=bom[j];
        i++;
    }
    for(int i=0;i<m+n;i++){
        printf("%d ", ans[i]);
    }
}