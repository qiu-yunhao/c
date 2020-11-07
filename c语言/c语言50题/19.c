#include <stdio.h>
#include <math.h>
int main(void)
{
    int i,t;
    int n[t],m[t];
    double v[t];
    printf("请输入测试组数:");
    scanf("%d",t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&n[i],&m[i]);
        v[i]=sprt(n[i]*n[i]+m[i]*m[i]);
    }
    int max;
    max=v[0];
    for(i=0;i<t;i++)
    {
        if(v[i]>max)
        max=v[i];
    }
    printf("%0.2f\n",max);
    return 0;
}