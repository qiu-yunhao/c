#include <stdio.h>
#define diff(x,y) ((x)-(y))
int main(void)
{
    int x,y;
    printf("请输入两个整数：");
    scanf("%d",&x);
    scanf("%d",&y);
    printf("两个数的差:%d\n",diff(x,y));
    return 0;
}