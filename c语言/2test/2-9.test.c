#include <stdio.h>
int main(void)
{
    int a,b;
    puts("请输入两个整数");
    printf("整数a：");scanf("%d",&a);
    printf("整数b:");scanf("%d",&b);
    printf("他们的平均值是%f\n",(a+b)/2.0);
    return 0;
}