#include <stdio.h>
int factorial(int n)
{
    int i,t=1;
    for(i=n;i>0;i--)
        {
            t=t*i;
        }
    return t;
}
int main(void)
{
    int n;
    printf("请输入一个整数");
    scanf("%d",&n);
    printf("这个数的阶乘是%d\n",factorial(n));
    return 0;
}