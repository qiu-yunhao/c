#include <stdio.h>
int main(void)
{
    int x;
    printf("请输入一个整数");
    scanf("%d",&x);
    if(x>=0)
    printf("该整数的绝对值是%d\n",x);
    else
    printf("该整数的绝对值是%d\n",-x);
    return 0;
    
}