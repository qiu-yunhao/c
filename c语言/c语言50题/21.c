#include <stdio.h>
int main(void)\
{
    int i,n,t=1;
    double j,s=1;
    printf("请输入跳跃次数：");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        t=2*t;
        s=s*(-0.5);
        j=(1+2*s)*t/3;
    }
    printf("跳跃方式有%f\n",j);
    return 0;
}