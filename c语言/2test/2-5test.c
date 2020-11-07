#include <stdio.h>
int main(void)
{
    int a,b;
    puts("请输入两个整数");
    printf("整数1：");scanf("%d",&a);
    printf("整数2：");scanf("%d",&b);
    printf("他们的平均值是%d\n",(a+b)/2);
    return 0;
}