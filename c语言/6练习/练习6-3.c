#include <stdio.h>
int cube (int a)
{
    return a*a*a;
}
int main(void)
{
    int x;
    printf("请输入一个整数：");
    scanf("%d",&x);
    printf("%d的立方是%d\n",x,cube(x));
    return 0;
}