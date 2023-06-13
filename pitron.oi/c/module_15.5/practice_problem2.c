#include<stdio.h>
void my_len(char *str){
 int count = 0;
 for(int i=0;str[i]!='\0';i++){
    count++;
 } 
 printf("%d", count);

}
int main()
{
    char str[20]="hello";
    my_len(str);
}