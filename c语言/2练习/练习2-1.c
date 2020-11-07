#include <stdio.h>
int main(void)
{
    int x,y;
    puts("请输入两个整数");
    printf("整数1：");scanf("%d",&x);
    printf("整数2：");scanf("%d",&y);
    printf("x是y的%d%/n",x*100/y);
    return 0;
}