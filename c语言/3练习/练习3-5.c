#include <stdio.h>
int main(void)
{
    int x,y;
    printf("请输入一个数");
    scanf("%d",&x);
    y=(x==0);
    printf("判断x是否等于0[yes...1/no...0]\n");
    printf("%d\n",y);
    return 0;
}