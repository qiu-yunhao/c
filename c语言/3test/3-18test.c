#include <stdio.h>
int main(void)
{
    int x;
    printf("请输入一个整数");
    scanf("%d",&x);
    if(x%3==0)
    puts("该数能被3整除");
    else if(x%3==1)
    puts("该数除以3余1");
    else 
    puts("该数除以3余2");
    return 0;
}