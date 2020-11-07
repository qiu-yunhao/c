#include <stdio.h>
int spr (int a)
{
    return a*a;
}
int pow4 (int a)
{   
    int b,c;
    b=spr(a);
    c=spr(b);
    return c;
}
int main(void)
{
    int x;
    printf("请输入一个整数:");scanf("%d",&x);
    printf("%d的四次方是%d\n",x,pow4(x));
    return 0;
}