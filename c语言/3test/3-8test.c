#include <stdio.h>
int main(void)
{
    int x;
    puts("请输入一个整数");
    scanf("%d",&x);
    if ((x%10)==5)
    puts("该整数的个位数是5.");
    else 
    puts("该数的个位不是5.");
    return 0;
}