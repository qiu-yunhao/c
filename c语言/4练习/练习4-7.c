#include <stdio.h>
int main(void)
{
    int x,y;
    printf("请输入一个整数:");
    scanf("%d",&y);
    x=1;
    while(x<=y/2)
    printf("%d ",x=x*2);
    printf("\n");
    return 0;
    }