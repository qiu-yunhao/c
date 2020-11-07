#include <stdio.h>
int main(void)
{
    int x;
    printf("请输入一个整数");
    scanf("%d",&x);
    printf("最后一位数是%d\n",x%10);
    return 0;
}