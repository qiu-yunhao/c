#include <stdio.h>
int main(void)
{
    int x;
    printf("请输入一个整数");
    scanf("%d",&x);
    if(x)
    puts("该整数不是0");
    else
    puts("该整数是0");
    return 0;
}