#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s", s);
    int cot[26]={0};
    for(int i=0;i<strlen(s);i++){
        int value=s[i]-'a';
        cot[value]++;
    }
//     for(int i=0;i<26;i++){   //0 na dokta caila
//         if(cot[i]!=0){
//         printf("%c - %d\n",i+'a', cot[i]);
//         }
//     }
// for(int i=0;i<strlen(s);i++){//shob value count dakla
//     int value=s[i]-97;
//     printf("%c -%d\n", value+97, cot[value]);
// }
for(int i=0;i<strlen(s);i++){//ak valure count akbar dakla
    int value=s[i]-97;
    if(cot[value]!=0){
    printf("%c -%d\n", value+97, cot[value]);
    }
    cot[value]=0;
}
}