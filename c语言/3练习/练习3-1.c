#include <stdio.h>
int main(void)
{
    int A,B;
    puts("请输入两个整数");
    printf("整数A:");scanf("%d",&A);
    printf("整数B:");scanf("%d",&B);
    if(A%B)
    puts("A不是B的约数");
    else
    puts("A是B的约数");
    return 0;   
}