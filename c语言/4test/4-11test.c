#include <stdio.h>
int main(void)
{
    int i,x;
    printf("请输入一个整数:");
    scanf("%d",&x);
    for(i=0;i<=x;i++)
    printf("%d ",i);
    putchar('\n');
    return 0;
}