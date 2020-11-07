#include <stdio.h>
int main(void)
{
    int x,y,max;
    puts("请输入两个整数");
    printf("整数1:");scanf("%d",&x);
    printf("整数2:");scanf("%d",&y);
    if(x>y) max=x;else max=y;
    printf("他们中最大的数是%d",max);
    return 0;
}
