#include<stdio.h>
#include<string.h>
int main()
{
    
    char str[100005];
    scanf("%s", str);
    int len=strlen(str);

      for(int i=0;i<len; i++){
        if(str[i]>='a'&&str[i]<='z'){
            str[i]='A'+(str[i]-'a');
            
        }
        
        else if(str[i]>='A'&&str[i]<='Z'){
            str[i]='a'+(str[i]-'A');
        }
        if(str[i]==','){
          str[i]=' ';
        }
        // printf("%s ", str);

       
      } printf("%s ", str);

}