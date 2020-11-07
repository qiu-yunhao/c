#include <stdio.h>
void put_char(int a,int b)
{
    while(a-->0);
    putchar(a);
}
int main(void)
{
    int x;
    printf("请输入一个整数：");
    scanf("%d",&x);
    put_char(x,'/a');
    return 0;
}