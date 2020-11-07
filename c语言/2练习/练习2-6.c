#include <stdio.h>
int main(void)
{
    int x;
    double a;
    printf("请输入您的身高：");
    scanf("%d",&x);
    a=(double)(x-100)*0.9;
    printf("您的标准体重是：%5.1f公斤\n",a);
    return 0;
}