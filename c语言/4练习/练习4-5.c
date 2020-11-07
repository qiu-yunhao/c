#include <stdio.h>
int main(void)
{
    int x,y;
    printf("请输入一个正整数");
    scanf("%d",&y);
    x=1;while(x<=y)
    printf("%d ",x++);
    printf("\n");
    return 0;
}