#include<stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int ara[n];
    int count[m];
    for(int i=0; i<m; i++){
        count[i] = 0; // Initialize the count for this number to 0
    }
    for(int i=0; i<n; i++){
        scanf("%d", &ara[i]);
        count[ara[i]-1]++; // Increment the count for this number
    }
    for(int i=0; i<m; i++){
        printf("%d\n", count[i]);
    }
    return 0;
}
