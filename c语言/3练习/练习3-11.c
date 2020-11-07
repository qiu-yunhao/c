#include <stdio.h>
int main(void)
{
    int x,y;
    puts("请输入两个整数");
    printf("整数1：");scanf("%d",&x);
    printf("整数2：");scanf("%d",&y);
    if(x-y<=10||y-x<=10)
    printf("他们的差小于等于10");
    else
    printf("他们的数大于10");
    return 0;
    
}