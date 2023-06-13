#include<stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    
    if(a>= 'a' && a <= 'y'){
        int i = a + 1;
        printf("%c\n", i);
    }
     else if(a='z'){
        printf("a\n");
    }
    return 0;
}