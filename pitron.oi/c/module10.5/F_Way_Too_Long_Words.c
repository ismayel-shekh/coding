#include<stdio.h>
#include<string.h>
int main(){
     int a;
     scanf("%d", &a);
     char str[101];
     for(int i=0;i<a;i++){
          // fgets(str,strlen(str),stdin);
          scanf("%s", str);
          if(strlen(str)<10)
          {
               printf("%s\n", str);
          }
          else{
               printf("%c%d%c\n", str[0], strlen(str)-2, str[strlen(str)-1]);
          }
     }

}