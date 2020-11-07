#include <stdio.h>
int main(void)
{
    int x,y;
    puts("请输入两个整数");
    printf("整数1：");scanf("%d",&x);
    printf("整数2：");scanf("%d",&y);
    if(x==y)
    puts("他们相等");
    else
    puts("他们不相等");
    return 0;    
}