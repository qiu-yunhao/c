#include <stdio.h>
int main(void)
{
    int x,y,z,min,max;
    puts("请输入两个整数");
    printf("整数x:");scanf("%d",&x);
    printf("整数y:");scanf("%d",&y);
    if(x>y)
    {
    max=x;
    min=y;
    }
    else
    {
        max=y;
        min=x;
    }
    printf("他们中较大的数是%d",max);
    printf("他们中较小数的是%d",min);
    return 0;
}