#include <stdio.h>
int main(void)
{
    int x;
    printf("请输入一个整数");
    scanf("%d",&x);
    if(x%2)
        puts("这个整数是奇数");
    else
        puts("这个整数是偶数");
    return 0;
    
}