#include <stdio.h>
int main(void)
{
    int x,y;
    printf("请输入一个整数:");
    scanf("%d",&x);
    for(y=2;y<=x;y+=2)
        printf("%d ",y);
    printf("\n");
    return 0;
}