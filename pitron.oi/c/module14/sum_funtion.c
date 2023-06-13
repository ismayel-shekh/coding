// #include<stdio.h>
// // return_type_name(parameter)
// // {
// //     code
// //     return what?
// // }
// int sum(int x, int y)//x=10 y=20
// {
//     //code
//     int sum=x+y;
//     return sum;
// }
// int main()
// {
//     printf("%d\n", sum(10,20));
//     printf("%d\n", sum(100,200));
//     return 0;
// }
#include<stdio.h>
int sum(int x,int y)
{
    int sum=x*y;
    return sum;
}
int main()
{
    printf("%d\n", sum(10,20));
    return 0;
}