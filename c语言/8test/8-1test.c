#include <stdio.h>
int sqr_int(int x)
{
    return x*x;
}
double sqr_double(double x)
{
    return x*x;
}
int main(void)
{
    int n;
    double x;
    printf("请输入一个整数：");
    scanf("%d",&n);
    printf("这个数的平方是%d\n",sqr_int(n));
    printf("请输入一个整数：");
    scanf("%lf",&x);
    printf("这个数的平方是%f\n",sqr_double(n));
    return 0;
}