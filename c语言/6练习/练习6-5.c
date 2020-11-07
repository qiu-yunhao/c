#include <stdio.h>
int sumpu (int a)
{
    int b;
    b=a*(a+1)/2;
    return b;
}
int main(void)
{
    int x;
    printf("请输入一个整数：");scanf("%d",&x);
    printf("1~%d的和是%d",x,sumpu(x));
    return 0;
}
