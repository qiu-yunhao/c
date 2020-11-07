#include <stdio.h>
int main(void)
{
    int x,y;
    puts("请输入两个整数");
    printf("整数x：");scanf("%d",&x);
    printf("整数y：");scanf("%d",&y);
    if(x>y)
    printf("较大的数是%d\n",x);
    else
    printf("较大的数是%d\n",y);
    return 0;    
}