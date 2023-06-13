#include<stdio.h>
// void fun(int ar[]/*ar[]*/, int n){
    // ar[1]=800;
    void fun(char ar[]){
    ar[0]='G';

}
int  main()
{
    // int ar[5]={10, 20, 30, 40, 50};
    // fun(ar,5);
    // for(int i=0;i<5;i++){
    //     printf("%d ", ar[i]);
    // }
    char ar[]="hello";
    fun(ar);
    printf("%s",ar);
}