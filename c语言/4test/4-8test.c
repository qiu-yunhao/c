#include <stdio.h>
int main(void)
{
    int x;
    printf("正整数");
    scanf("%d",&x);
    while(x-->0)
    putchar('*');
    putchar('\n');
    return 0;
}