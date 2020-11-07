#include <stdio.h>
int main(void)
{
    int x,y,max;
    puts("请输入两个整数");
    printf("整数x：");scanf("%d",&x);
    printf("整数y：");scanf("%d",&y);
    if(x>y)
    max=x;
    else
    max=y;
    printf("较大的数是%d\n",max);
    return 0;    
}