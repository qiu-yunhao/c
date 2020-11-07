#include <stdio.h>
int main(void)
{
    int x;
    printf("请输入一个整数");
    scanf("%d",&x);
    if (x%5)
        puts("输入的整数不能被5整除");
    return 0;
}